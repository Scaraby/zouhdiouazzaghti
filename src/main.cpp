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
    sf::RenderWindow window(sf::VideoMode(1024, 512), "Tilemap");
    state::State etat;
        
    // on crée la tilemap avec le niveau précédemment défini
    
    if (!map.load("../Textures/PNG/TileSet.png", sf::Vector2u(64, 64), etat.level, 16, 8))
        return -1;

    // on fait tourner la boucle principale
    while (window.isOpen())
    {
        // on gère les évènements
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }

        // on dessine le niveau
        window.clear();
        window.draw(map);
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
