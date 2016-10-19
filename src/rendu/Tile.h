// Generated by dia2code
#ifndef RENDU__TILE__H
#define RENDU__TILE__H

#include "SFML/Graphics.hpp" 
#include <string>

namespace sf {
  class Transformable;
  class Drawable;
}


namespace rendu {

  /// class Tile - 
  class Tile : public sf::Transformable, public sf::Drawable {
    // Attributes
  protected:
    sf::VertexArray m_verticles;
    sf::Texture m_tileset;
    // Operations
  public:
    bool load (const std::string& tileset, sf::Vector2u tileSize, const int* tiles, unsigned int width, unsigned int height);
    void draw (sf::RenderTarget& target, sf::RenderStates& states) const;
    int generateMap ();
  };

};

#endif