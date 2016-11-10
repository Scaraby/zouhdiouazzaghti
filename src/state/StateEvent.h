// Generated by dia2code
#ifndef STATE__STATEEVENT__H
#define STATE__STATEEVENT__H


namespace state {
  class State;
  class StateObserver;
}

#include "StateEventId.h"
#include "StateObserver.h"

namespace state {

  /// class StateEvent - 
  class StateEvent : public state::StateObserver {
    // Associations
    state::StateEventId id;
    // Attributes
  public:
    const State& state;
    // Operations
  public:
    StateEvent (const State& s, StateEventId id);
    bool const operator== (StateEventId id);
  };

};

#endif