#include <iostream>

//coucou lotestl
//Salut  Les lignes suivantes ne servent qu'à vérifier que la compilation avec SFML fonctionne
#include <SFML/Graphics.hpp>
#include "state.h"
#include "rendu.h"
#include "rendu/Tile.h"
#include "engine.h"

using namespace std;
using namespace state;
using namespace rendu;
using namespace engine;



int main(int argc,char* argv[]) 
{   
    Engine moteur ;
    rendu::Tile map;
    state::State etat;
    Character c;
    etat.setCharacter(&c);
    etat.setlevel();
    sf::RenderWindow window(sf::VideoMode(1024, 512), "Tilemap");
    sf::Sprite sprite;
    sprite.setPosition(etat.characters->getX(),etat.characters->getY());
    sf::Vector2i anim(1,Down);
    sf::Texture texture;
    cout << etat.characters->getY() << endl ;
    
    texture.loadFromFile("res/TilePerso.png");
    sprite.setTexture(texture);
    
    sf::Clock clock;
    bool updateGame=false;
    
   // cout << etat.characters->getY();
        
    // on crée la tilemap avec le niveau précédemment défini
    
    if (!map.load("res/TileSet.png", sf::Vector2u(64, 64), etat.level, 16, 8))
        return -1;

    // on fait tourner la boucle principale
    while (window.isOpen())
    {
        // on gère les évènements
        sf::Event event;
        int bouge = 0;
        
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
                    
                     
               /* case sf::Event::KeyPressed:
                    updateGame=true;
                    switch(event.key.code){
                        
                        case sf::Keyboard::Right:
                           
                            anim.y=Right;
                            moteur.moveElement(Right,etat.characters);
                            cout << etat.characters->getX() << endl;
                            sprite.setPosition(etat.characters->getX(),etat.characters->getY());
                            
                            break;
                        case sf::Keyboard::Left:
                           
                            anim.y=Left;
                            moteur.moveElement(Left,etat.characters);
                            cout << etat.characters->getX() << endl;
                            sprite.move(0,0);
                            sprite.setPosition(etat.characters->getX(),etat.characters->getY());
                            
                            break;
                        case sf::Keyboard::Up:
                            
                            anim.y=Up;
                            moteur.moveElement(Up,etat.characters);
                            cout << etat.characters->getY() << endl;
                            sprite.move(0,0);
                            sprite.setPosition(etat.characters->getX(),etat.characters->getY());
                            
                            break;
                        case sf::Keyboard::Down:
                            
                            anim.y=Down;
                            moteur.moveElement(Down,etat.characters);
                            cout << etat.characters->getY() << endl;
                            sprite.move(0,0);
                            sprite.setPosition(etat.characters->getX(),etat.characters->getY());
                            
                            break;
                        default:
                            break;
                    }*/
                    
                default:
                    break;
                    bouge = rand() % 3;
                    anim.y= bouge;
                    moteur.moveElement(bouge,etat.characters);
             
            }
            if (sprite.getPosition().x < 52 )
                sprite.setPosition(sf::Vector2f(52,sprite.getPosition().y));
            
            if (sprite.getPosition().y < 47)
                sprite.setPosition(sf::Vector2f(sprite.getPosition().x,47));
            
            if (sprite.getPosition().x > 903)
                sprite.setPosition(sf::Vector2f(903,sprite.getPosition().y));
            
            if (sprite.getPosition().y > 356)
                sprite.setPosition(sf::Vector2f(sprite.getPosition().x,356));
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
        window.clear();
        window.draw(map);
        window.draw(sprite);
        window.display();
    }

    cout << "It works !" << endl;

    return 0;
}
