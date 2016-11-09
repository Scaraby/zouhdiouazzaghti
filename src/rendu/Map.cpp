#include "Map.h"
#include <SFML/Graphics.hpp>
#include "state.h"

using namespace state;
using namespace rendu;



int Map::generateMap(sf::RenderWindow& window){
    rendu::Tile map;

    sf::Vector2i anim(1,Down);
    sf::Texture texture;
    sf::Sprite sprite;
    sprite.setPosition(100,100);
    texture.loadFromFile("src/TilePerso.png");
    sprite.setTexture(texture);
    
    sf::Clock clock;
    bool updateGame=false;
    
    
    
    state::State etat;
        
    // on crée la tilemap avec le niveau précédemment défini
    
    if (!map.load("src/TileSet.png", sf::Vector2u(64, 64), etat.level, 16, 8))
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
                case sf::Event::KeyPressed:
                    updateGame=true;
                    switch(event.key.code){
                        
                        case sf::Keyboard::Right:
                            //texture.loadFromFile("Textures/personnage/sprite-droite.png");
                            //sprite.setTexture(texture);
                            
                            sprite.move(0,0);
                            sprite.move(2,0);
                            anim.y=Right;
                            
                            break;
                        case sf::Keyboard::Left:
                            //texture.loadFromFile("Textures/personnage/sprite-gauche.png");
                           // sprite.setTexture(texture);
                            anim.y=Left;
                            sprite.move(0,0);
                            sprite.move(-2,0);
                            
                            break;
                        case sf::Keyboard::Up:
                            //texture.loadFromFile("Textures/personnage/sprite1.png");
                            // sprite.setTexture(texture);
                            anim.y=Up;
                            sprite.move(0,0);
                            sprite.move(0,-2);
                            
                            break;
                        case sf::Keyboard::Down:
                            //texture.loadFromFile("Textures/personnage/sprite-43.png");
                            //sprite.setTexture(texture);
                            anim.y=Down;
                            sprite.move(0,0);
                            sprite.move(0,2);
                            
                            break;
                        default:
                            break;
                    }
                    
                default:
                    break;
             
            }
            if (sprite.getPosition().x < 52)
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
    return 0;
}
