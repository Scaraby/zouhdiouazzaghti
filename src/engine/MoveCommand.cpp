#include <iostream>
#include "MoveCommand.h"
#include "state.h"
#include "rendu.h"

using namespace engine;
using namespace ia;
using namespace state;
using namespace std;



void MoveCommand::run(){
    if (!(character->getTurn())) std::cout << "Wait for your turn" << endl;

        else 
        {  
         switch (this->dir){
             case Right:
               character->setX(character->getX()+52);
                break;
            
             case Left :
                 character->setX(character->getX()-52);
                 break;
           
            
             case Up:
                 character->setY(character->getY()-52);
                 break;
            
             case Down:
                character->setY(character->getY()+52);
               break;
            
            default:
               break;
            
         }

    }
}

MoveCommand::MoveCommand (state::Direction dir, state::Character* character){
    
    this->dir = dir;
    this->character = character;
    
}
