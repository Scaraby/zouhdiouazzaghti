// Generated by dia2code
#ifndef STATE__WALL__H
#define STATE__WALL__H


namespace state {
  class Static;
}

#include "WallTypeId.h"
#include "Static.h"

namespace state {

  /// class Wall - 
  class Wall : public state::Static {
    // Associations
    // Operations
  public:
    bool const isSpace ();
    WallTypeId const getWallTypeId ();
    void setWallTypeId (WallTypeId id);
  };

};

#endif