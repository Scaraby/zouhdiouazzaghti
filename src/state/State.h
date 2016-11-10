// Generated by dia2code
#ifndef STATE__STATE__H
#define STATE__STATE__H

#include <vector>

namespace state {
  class Element;
  class Observable;
};
namespace engine {
  class Engine;
};
namespace rendu {
  class Tile;
};
namespace state {
  class Grid;
  class ElementList;
}

#include "Observable.h"
#include "engine/Engine.h"
#include "rendu/Tile.h"
#include "Grid.h"
#include "ElementList.h"

namespace state {

  /// class State - 
  class State : public state::Observable {
    // Associations
    // Attributes
  public:
    Element* Characters;
    std::vector<int> level;
    // Operations
  public:
    State ();
    ~State ();
  };

};

#endif
