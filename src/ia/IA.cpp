#include "ia.h" 
#include "engine.h"
#include <stdlib.h>
#include "state.h"

using namespace engine;
using namespace ia;
using namespace state;


Direction IA::Execute (Engine moteur, State etat){
    Direction dir;
    int x = rand() % 4;
    dir = (Direction)x;

    moteur.moveElement(dir,etat.characters);

    return dir;

}
