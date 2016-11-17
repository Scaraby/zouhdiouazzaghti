#include "ia.h" 
#include "engine.h"
#include <stdlib.h>
#include "state.h"

using namespace engine;
using namespace ia;
using namespace state;


Direction IA::Execute (){
    Direction dir;
    int x = rand() % 3;
    dir = (Direction)x;
    return dir;

}
