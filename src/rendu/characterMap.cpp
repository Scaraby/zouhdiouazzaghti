#include <SFML/Graphics.hpp>
#include "state.h"
#include "characterMap.h"

using namespace state;
using namespace rendu;

sf::Sprite characterMap::generateCharacter(sf::Sprite& sprite){
    sf::Vector2i anim(1,Down);
    sf::Texture texture;
    sprite.setPosition(100,100);
    texture.loadFromFile("src/TilePerso.png");
    sprite.setTexture(texture);
    return sprite;
}