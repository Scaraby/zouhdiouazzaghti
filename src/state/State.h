// Generated by dia2code
#ifndef STATE__STATE__H
#define STATE__STATE__H

#include <vector>

namespace state {
  class ElementList;
  class Observable;
  class Grid;
}

#include "ElementList.h"
#include "Observable.h"
#include "Grid.h"

namespace state {

  /// class State - 
  class State : public state::Observable {
    // Associations
    // Attributes
  public:
    std::vector<int> level;
  protected:
    ElementList list;
    // Operations
  public:
    State ();
    ~State ();
  };

};

#endif
