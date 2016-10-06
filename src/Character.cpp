#include "Character.h"

Character :: getPosition(){
    return this->speed;
}

Character :: getPosition(){
    return this->position;
}

Character :: setDirection(Direction d){
    this->d=d;
    
}

Character :: setSpeed(int s){
    this->speed = s;
}

Character :: getStrength(){
    return this->strength;
}

Character::setStrength(int strenght){
    this->strength;
}

Character::getXP(){
    return this->xp;
}

Character::setXP(int XP){
     this->xp=XP;
}

Character::getLevel(){
    return this->level;
}

Character::setLevel(int l){
    this->level=l;
}

Character::Character(){
    speed=0;
    level=1;
    xp=0;
    strength=0;
    position=0;
}