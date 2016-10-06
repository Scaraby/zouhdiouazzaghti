// Generated by dia2code
#ifndef WALL__H
#define WALL__H

/// class Wall - 
class Wall : public StaticElement {
  // Operations
public:
  Wall ( id:WallTypeId);
  bool const isSpace ();
  TypeId const getTypeId ();
  Element* const clone ();
  bool const equals (const Element& other);
  WallTypeId const getWallTypeId ();
  void setWallTypeId (WallTypeId id);
};

#endif
