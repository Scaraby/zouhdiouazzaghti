// Generated by dia2code
#ifndef RENDU__MAP__H
#define RENDU__MAP__H

#include "SFML/Graphics.hpp" 

namespace rendu {
  class Tile;
}

#include "Tile.h"

namespace rendu {

  /// class Map - 
  class Map : public rendu::Tile {
    // Operations
  public:
    int generateMap (sf::RenderWindow& window);
  };

};

#endif
