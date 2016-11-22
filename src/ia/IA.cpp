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
   for (int i = 0; i < group.size(); i++) {  // Peut-être une segfault à la dernière itération, attention
    	if ( group[i]->getY() < group[i+1]->getY() + 100)
			{moteur.moveElement(Up, group[i]);}
		else moteur.moveElement(dir,group[i]);
		

		if ( group[i]->getY() < group[i+1]->getY() - 100)
			{moteur.moveElement(Down, group[i]);}
		else moteur.moveElement(dir,group[i]);
		

		if (group[i]->getY() < group[i+1]->getX() + 100)
			{moteur.moveElement(Right, group[i]);}
		else moteur.moveElement(dir,group[i]);
		

		if (group[i]->getY() < group[i+1]->getX() - 100)
			{moteur.moveElement(Left, group[i]);}
		else moteur.moveElement(dir,group[i]);
}
    return dir;

}


