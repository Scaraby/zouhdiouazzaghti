#include <iostream>
#include "Engine.h"
#include <SFML/Graphics.hpp>
#include "state.h"


using namespace state;
using namespace engine;
using namespace std;



    void Engine::moveElement(state::Direction dir, state::Character* character) {  //Le principe ici est d'envoyer un message au state pour modifier les attributs x, y et DIRECTION (attribut à rajouter) de ELEMENT. Il faudra que la position du sprite dépende directement de,int a=Element.x et int b=Element.y et de la direction (les int a et int b c'est des exemples d'instanciation pour éviter de faire un gros bloc illisible quand t'appelle sprite.move(a , b). Voilà, si t'arrives à faire ça on aura au moins fait ça pour la partie moteur... Restera plus que le RESTE mdr.
if (!(character->getTurn()))
{std::cout << "Wait for your turn\n";}
else{  switch (dir){
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

    void Engine::attack(state::Character* c, state::Character* d){
        cout << c->getName() << "attaque " << d->getName() << endl ;
    }
    

    void Engine::changeturns (state::State& s){
        for (int i = 0; i<s.characterlist.size();i++){
            cout<< s.characterlist[i]->getMovecount() << endl;
            
            if (s.characterlist[i]->getMovecount() > 2 && (s.characterlist[i]->getTurn())){
                
               
               
               
               for(int k = 0; k<s.characterlist.size();k++){
                   
                if ((k != i) && !(s.characterlist[i]->getTurn()) && !(s.characterlist[k]->getTurn()) ){
                    s.characterlist[i]->resetMovecount();
                    s.characterlist[k]->setTurn(true);
                   
                    }
            
                }
               s.characterlist[i]->setTurn(false);
            }                     
        }           
    }         
