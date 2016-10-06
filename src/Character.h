// Generated by dia2code
#ifndef CHARACTER__H
#define CHARACTER__H

/// class Character - 
class Character : public Element {
  // Attributes
protected:
   speed;
   position;
   strength;
   xp;
   level;
  // Operations
public:
  Character ();
  bool const isCharacter ();
  TypeId const getTypeId ();
  int const getSpeed ();
  int const getPosition ();
  void setDirection (Direction d);
  void setSpeed (int s);
  CharacterStatus const getStatus ();
  setStrength ();
  getStrength ();
  setXP ();
  getXP ();
};

#endif
