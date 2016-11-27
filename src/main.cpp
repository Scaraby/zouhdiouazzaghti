#include <iostream>

//coucou lotestl
//Salut  Les lignes suivantes ne servent qu'à vérifier que la compilation avec SFML fonctionne
#include <SFML/Graphics.hpp>
#include "state.h"
#include "rendu.h"
#include "rendu/Tile.h"
#include "engine.h"
#include "ia.h"
#include "unistd.h"

using namespace std;
using namespace state;
using namespace rendu;
using namespace engine;
using namespace ia;



int main(int argc,char* argv[]) 
{   
    Engine moteur ;
    rendu::Tile map;
    state::State etat;
    Character *c = new Character(); 
    Character *d = new Character();
    c->resetMovecount();
    d->resetMovecount();
    d->setTurn(true);
    c->setTurn(true);
    IA iaPerso;

    etat.characterlist.push_back(c);
    etat.characterlist.push_back(d);
    
    ElementSprite sprite, sprite2;
    c->addPosObs(&sprite);
    d->addPosObs(&sprite2);
    
    c->setX(600);
    c->setY(300);
    
    c->setName("Armure");
    d->setName("Krilin");
    
    etat.setlevel();
    
    sf::RenderWindow window(sf::VideoMode(1024, 512), "Tilemap");
    sf::Vector2i anim(1,Down);
    sf::Vector2i anim2(1,Down);
    sf::Texture texture;
    sf::Texture texture2;
 
    texture.loadFromFile("res/TilePerso.png");
    texture2.loadFromFile("res/TileHero.png");
    
    sprite.setTexture(texture);
    sprite2.setTexture(texture2);
    
    sf::Clock clock;
    bool updateGame=false;

    // on crée la tilemap avec le niveau précédemment défini
    
    if (!map.load("res/TileSet.png", sf::Vector2u(64, 64), etat.level, 16, 8))
        return -1;

    // on fait tourner la boucle principale
    while (window.isOpen())
    {
        // on gère les évènements
        sf::Event event;
               
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
                    
                 // commandes pour les humains , à décommenter pour pouvoir utiliser le clavier   
               case sf::Event::KeyPressed:
                    updateGame=true;
                   
                    switch(event.key.code){
                        
                        case sf::Keyboard::Right:
                           
                            anim2.y=Right;
                            moteur.moveElement(Right,d);
                            break;
                            
                        case sf::Keyboard::Left:
                           
                            anim2.y=Left;
                            moteur.moveElement(Left,d);
                            break;
                            
                        case sf::Keyboard::Up:
                            
                            anim2.y=Up;
                            moteur.moveElement(Up,d);
                            break;
                        case sf::Keyboard::Down:
                            
                            anim2.y=Down;
                            moteur.moveElement(Down,d);
                            break;
                            
                        default:
                            break;
                    }
                    
                default:
                    break;
            }
        } 		
				
	//IA         
            anim.y=iaPerso.ExecuteGroupAI(moteur, etat.characterlist);
            

            
        //Gestion sorties de map    
            for (auto a : etat.characterlist){
                if (a->getX() < 52){
                    a->setX(52);
                }
                
                if (a->getY()<47){
                    a->setY(52);
                }
                
                if (a->getX()>903){
                    a->setX(903);
                }
                
                if (a->getY()>285){
                    a->setY(300);
                }
            }
            
        // on dessine le niveau
        if (updateGame)
            if (clock.getElapsedTime().asMilliseconds() > 50){
                anim.x--;
                if (anim.x*64 >= texture.getSize().x)
                    anim.x=2;
                
                clock.restart();
            }
        
        sprite.setTextureRect(sf::IntRect(anim.x * 64, anim.y*64, 64, 64));
        sprite2.setTextureRect(sf::IntRect(anim2.x * 64, anim2.y*64, 64, 64));

        window.clear();
        window.draw(map);
        window.draw(sprite);
        window.draw(sprite2);
        window.display();
    }

    cout << "It works !" << endl;

    return 0;
}
