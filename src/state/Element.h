// Generated by dia2code
#ifndef STATE__ELEMENT__H
#define STATE__ELEMENT__H


namespace state {
  class PositionObs;
}

namespace state {

  /// class Element - 
  class Element {
    // Attributes
  protected:
    int x;
    int y;
    // Operations
  public:
    bool const isStatic ();
    int getX ();
    int getY ();
    void setX (int x);
    void setY (int y);
    Element ();
    void addPosObs (PositionObs* p);
  };

};

#endif
