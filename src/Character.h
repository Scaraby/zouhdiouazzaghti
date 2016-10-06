// Generated by dia2code
#ifndef CHARACTER__H
#define CHARACTER__H

/// class Character - 
class Character : public Element {
  // Attributes
protected:
   int speed;
   int position;
   int strength;
   int xp;
   int level;
   Direction d;
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
  setStrength (int strenght);
  getStrength ();
  setXP (int XP);
  getXP ();
  getLevel();
  setLevel(int l);
};

#endif
