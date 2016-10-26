#include <iostream>

//coucou lotestl
//Salut  Les lignes suivantes ne servent qu'à vérifier que la compilation avec SFML fonctionne
#include <SFML/Graphics.hpp>
#include "state.h"
#include "rendu.h"
#include "rendu/Tile.h"

using namespace std;

int generateMap() {
    rendu::Tile map;
    sf::Texture texture;
    sf::Sprite sprite;
    sprite.setPosition(100,100);
    texture.loadFromFile("Textures/personnage/sprite-43.png");
    sprite.setTexture(texture);
    
    
    sf::RenderWindow window(sf::VideoMode(1024, 512), "Tilemap");
    state::State etat;
        
    // on crée la tilemap avec le niveau précédemment défini
    
    if (!map.load("Textures/PNG/TileSet.png", sf::Vector2u(64, 64), etat.level, 16, 8))
        return -1;

    // on fait tourner la boucle principale
    while (window.isOpen())
    {
        // on gère les évènements
        sf::Event event;
        
        while (window.pollEvent(event))
        {
            switch(event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::KeyPressed:
                    switch(event.key.code){
                        case sf::Keyboard::Right:
                            texture.loadFromFile("Textures/personnage/sprite-droite.png");
                            sprite.setTexture(texture);
                            sprite.move(0,0);
                            sprite.move(3,0);
                            break;
                        case sf::Keyboard::Left:
                            texture.loadFromFile("Textures/personnage/sprite-gauche.png");
                            sprite.setTexture(texture);
                            sprite.move(0,0);
                            sprite.move(-3,0);
                            break;
                        case sf::Keyboard::Up:
                            texture.loadFromFile("Textures/personnage/sprite1.png");
                             sprite.setTexture(texture);
                            sprite.move(0,0);
                            sprite.move(0,-3);
                            break;
                        case sf::Keyboard::Down:
                            texture.loadFromFile("Textures/personnage/sprite-43.png");
                            sprite.setTexture(texture);
                            sprite.move(0,0);
                            sprite.move(0,3);
                            break;
                        default:
                            break;
                    }
                    break;
                default:
                    break;
                    
            
            }      
        }

        // on dessine le niveau
        window.clear();
        
        window.draw(map);
        window.draw(sprite);
        window.display();
    }
    return 0;
}

int main(int argc,char* argv[]) 
{   
    generateMap();
    cout << "It works !" << endl;
    
    
    return 0;
}
