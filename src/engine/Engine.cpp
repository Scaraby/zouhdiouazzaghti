#include "Engine.h"
#include <SFML/Graphics.hpp>
#include "state.h"


using namespace state;
using namespace engine;

void moveElement (sf::Event& event){  //Le principe ici est d'envoyer un message au state pour modifier les attributs x, y et DIRECTION (attribut à rajouter) de ELEMENT. Il faudra que la position du sprite dépende directement de,int a=Element.x et int b=Element.y et de la direction (les int a et int b c'est des exemples d'instanciation pour éviter de faire un gros bloc illisible quand t'appelle sprite.move(a , b). Voilà, si t'arrives à faire ça on aura au moins fait ça pour la partie moteur... Restera plus que le RESTE mdr.

}