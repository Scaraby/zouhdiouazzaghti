#include "ia.h" 
#include "engine.h"
#include <stdlib.h>
#include "state.h"
#include <unistd.h>

using namespace engine;
using namespace ia;
using namespace state;
using namespace std;

Direction IA::ExecuteDumb (Engine moteur, State etat, Character* c){
    Direction dir;
    int x = rand() % 4;
    dir = (Direction)x;

    moteur.moveElement(dir,c);

    return dir;

}

Direction IA::ExecuteGroupAI (Engine moteur, vector<Character*> group){
    Direction dir;
    int x = rand() % 4;
    dir = (Direction)x;
    	if ( group[0]->getY() < group[1]->getY() + 75)
			{moteur.moveElement(Down, group[0]);
                        moteur.moveElement(dir, group[1]);}
             
		

		if ( group[0]->getY() > group[1]->getY() - 75)
			{moteur.moveElement(Up, group[0]);
                        moteur.moveElement(dir, group[1]);}
		
		

		if (group[0]->getX() < group[1]->getX() + 50)
			{moteur.moveElement(Right, group[0]);
                        moteur.moveElement(dir, group[1]);}
		
		

		if (group[0]->getX() > group[1]->getX() - 50)
			{moteur.moveElement(Left, group[0]);
                        moteur.moveElement(dir, group[1]);}
		
    return dir;

}


