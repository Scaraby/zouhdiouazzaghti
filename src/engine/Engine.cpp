#include "Engine.h"
#include <SFML/Graphics.hpp>
#include "state.h"


using namespace state;
using namespace engine;

void moveElement ( ){   //Le principe ici est d'envoyer un message au state pour modifier les attributs x, y et DIRECTION (attribut à rajouter) de ELEMENT. Il faudra que la position du sprite dépende directement de,int a=Element.x et int b=Element.y et de la direction (les int a et int b c'est des exemples d'instanciation pour éviter de faire un gros bloc illisible quand t'appelle sprite.move(a , b). Voilà, si t'arrives à faire ça on aura au moins fait ça pour la partie moteur... Restera plus que le RESTE mdr.
  while (window.pollEvent(event))
        {
            if (event.type != sf::Event::KeyPressed)
                updateGame=false;
            else
                updateGame=true;
            switch(event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                    updateGame=true;
                    switch(event.key.code){
                        //On fait un mouvement de 50 par 50 pour faire avancer le sprite de case en case (pas grave pour l'animation)
                        case sf::Keyboard::Right:
                            //texture.loadFromFile("Textures/personnage/sprite-droite.png");
                            //sprite.setTexture(texture);
                            //sprite.move(0,0);
                            //sprite.move(50,0);
                            //anim.y=Right;
							state.characters.x +=50;
							
                            
                            break;
                        case sf::Keyboard::Left:
                            //texture.loadFromFile("Textures/personnage/sprite-gauche.png");
                           // sprite.setTexture(texture);
                            //anim.y=Left;
                            //sprite.move(0,0);
                            //sprite.move(-50,0);
							state.characters.x -=50;
                            break;
                        case sf::Keyboard::Up:
                            //texture.loadFromFile("Textures/personnage/sprite1.png");
                            // sprite.setTexture(texture);
                           /* anim.y=Up;
                            sprite.move(0,0);
                            sprite.move(0,-50);*/
							state.characters.x +=50;            
                
                            break;
                        case sf::Keyboard::Down:
                            //texture.loadFromFile("Textures/personnage/sprite-43.png");
                            //sprite.setTexture(texture);
                           /* anim.y=Down;
                            sprite.move(0,0);
                            sprite.move(0,50);*/

							state.characters.x -=50;                            
                            break;
                        default:
                            break;
                    }
}
