#include <iostream>

//coucou lotestl
//Salut  Les lignes suivantes ne servent qu'à vérifier que la compilation avec SFML fonctionne
#include <SFML/Graphics.hpp>
#include "Rendu.hpp"

int testSFML() {
    sf::Texture texture;
    sf::RenderWindow window(sf::VideoMode(1024, 512), "Tilemap");

    // on définit le niveau à l'aide de numéro de tuiles
     const int level[] =
    {
        10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
        10, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 10,
        10, 3, 4, 9, 4, 4, 4, 4, 4, 4, 4, 4, 9, 4, 5, 10,
        10, 3, 4, 4, 4, 9, 4, 4, 4, 4, 4, 4, 4, 4, 5, 10,
        10, 3, 9, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 10,
        10, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 9, 4, 4, 5, 10,
        10, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 10,
        10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10
    };
    
     
    
    // on crée la tilemap avec le niveau précédemment défini
    TileMap map;
    if (!map.load("../Textures/PNG/TileSet.png", sf::Vector2u(64, 64), level, 16, 8))
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

// Fin test SFML



using namespace std;


int main(int argc,char* argv[]) 
{
 
    cout << "It works !" << endl;
    testSFML();

    return 0;
}
