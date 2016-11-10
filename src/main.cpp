#include <iostream>

//coucou lotestl
//Salut  Les lignes suivantes ne servent qu'à vérifier que la compilation avec SFML fonctionne
#include <SFML/Graphics.hpp>
#include "state.h"
#include "rendu.h"
#include "rendu/Tile.h"

using namespace std;
using namespace state;
using namespace rendu;



int main(int argc,char* argv[]) 
{   
   
    Map *map = new Map();
    characterMap *perso = new characterMap();
    sf::RenderWindow window(sf::VideoMode(1024, 512), "Tilemap");
    sf::Sprite sprite;
    map->generateMap(window);
    //perso->generateCharacter(sprite);
    cout << "It works !" << endl;
    
    
    return 0;
}
