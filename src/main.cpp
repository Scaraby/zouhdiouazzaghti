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
    Character* c=NULL;
    Character* d=NULL;
    IA iaPerso;
    //etat.setCharacter(&c);
    //etat.characterlist->AddElement(&c);
    //etat.characterlist->AddElement(&d);
    ElementSprite sprite, sprite2;
    c->addPosObs(&sprite);
    d->addPosObs(&sprite2);
    
    etat.setlevel();
    
    sf::RenderWindow window(sf::VideoMode(1024, 512), "Tilemap");
    sprite.setPosition(c->getX(),c->getY());
    sprite.setPosition(d->getX(),d->getY());
    sf::Vector2i anim(1,Down);
    sf::Texture texture;
    sf::Texture texture2;
    //cout << etat.characters->getY() << endl ;

    
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
          /*  if (event.type != sf::Event::KeyPressed)
                updateGame=false;
            else
                updateGame=true;*/
            switch(event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                    
                  // commandes pour les humains , à décommenter pour pouvoir utiliser le clavier   
               case sf::Event::KeyPressed:
                    updateGame=true;
                    switch(event.key.code){
                        
                        case sf::Keyboard::Right:
                           
                            anim.y=Right;
                            moteur.moveElement(Right,d);
                            //cout << etat.characters->getX() << endl;
                            //sprite.setPosition(etat.characters->getX(),etat.characters->getY());
                            
                            break;
                        case sf::Keyboard::Left:
                           
                            anim.y=Left;
                            moteur.moveElement(Left,d);
                            //cout << etat.characters->getX() << endl;
                            //sprite.move(0,0);
                           // sprite.setPosition(etat.characters->getX(),etat.characters->getY());
                            
                            break;
                        case sf::Keyboard::Up:
                            
                            anim.y=Up;
                            moteur.moveElement(Up,d);
                           // cout << etat.characters->getY() << endl;
                            //sprite.move(0,0);
                            //sprite.setPosition(etat.characters->getX(),etat.characters->getY());
                            
                            break;
                        case sf::Keyboard::Down:
                            
                            anim.y=Down;
                            moteur.moveElement(Down,d);
                          //  cout << etat.characters->getY() << endl;
                           // sprite.move(0,0);
                           // sprite.setPosition(etat.characters->getX(),etat.characters->getY());
                            
                            break;
                        default:
                            break;
                    }
                    
                default:
                    break;
            }
        } 		
					//IA 
                    
            anim.y=iaPerso.ExecuteDumb(moteur, etat);
            sprite.setPosition(c->getX(),c->getY());
             
            
            if (sprite.getPosition().x < 52 ){
                //etat.characters->setX(52);
                sprite.setPosition(d->getX(),d->getY());
            }
            
            if (sprite.getPosition().y < 47)
                sprite.setPosition(sf::Vector2f(sprite.getPosition().x,47));
            
            if (sprite.getPosition().x > 903)
                sprite.setPosition(sf::Vector2f(903,sprite.getPosition().y));
            
            if (sprite.getPosition().y > 356)
                sprite.setPosition(sf::Vector2f(sprite.getPosition().x,356));
        

        // on dessine le niveau
        if (updateGame)
            if (clock.getElapsedTime().asMilliseconds() > 50){
                anim.x--;
                if (anim.x*64 >= texture.getSize().x)
                    anim.x=2;
                clock.restart();
            }
        
        sprite.setTextureRect(sf::IntRect(anim.x * 64, anim.y*64, 64, 64));
        window.clear();
        window.draw(map);
        window.draw(sprite);
        window.draw(sprite2);
        window.display();
    }

    cout << "It works !" << endl;

    return 0;
}
