// Generated by dia2code
#ifndef STATE__ELEMENTFABRICATOR__H
#define STATE__ELEMENTFABRICATOR__H


namespace state {
  class Element;
}

#include "Element.h"

namespace state {

  /// class ElementFabricator - 
  class ElementFabricator : public state::Element {
    // Operations
  public:
    virtual Element* generate ();
  };

};

#endif
