#include "Character.h"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

namespace state{

 Character::Character() { 
     
 }

 bool const Character::isCharacter(){
     
 }
 
 int Character::getSpeed(){
     return this->speed;
 }
 
 int Character::getStrength(){
     return this->strength;
 }
 
 int Character::getXP(){
     return this->getXP();
 }
 
 int Character::getHitPoints(){
     return this->hitpoints;
 }
  
 int Character::getLevel(){
     return this->level;
 }
 
 std::string Character::getName(){
     return this->name;
 }
  
 
 void Character::setSpeed(int speed){
     this->speed=speed;
 }
 
 void Character::setStrength(int strength){
     this->strength=strength;
 }
 
 void Character::setXP(int xp){
     this->xp=xp;
 }
 
 void Character::setHitPoints(int hitPoints){
     this->hitpoints=hitPoints;
 }
 
 void Character::setLevel(int level){
     this->level=level;
 }
 
 void Character::setName(std::string name){
     this->name=name;
 }
 
 void Character::setTurn(bool turn){
     this->turn=turn;
 }
 void Character::incMovecount (){
     this->movecount +=1;
     
 }
 
 void Character::resetMovecount (){
     this->movecount = 0;
 }
 
int Character::getMovecount (){
    return this->movecount;

 }
bool Character::getTurn (){
    return this->turn;
 }
 
 Character::~Character(){
     
 }
 

 
 
 
}
