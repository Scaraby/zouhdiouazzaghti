// Generated by dia2code
#ifndef STATE__GRID__H
#define STATE__GRID__H


namespace state {
  class State;
  class ElementList;
}

#include "ElementList.h"

namespace state {

  /// class Grid - 
  class Grid : public state::ElementList {
    // Attributes
  public:
    int height;
    int width;
    // Operations
  public:
    Grid (State& state);
    int getWidth ();
    void setWidth (int width);
    int getHeight ();
    /// 	
    /// @param height		(???) 
    void setHeight (int height);
  };

};

#endif
