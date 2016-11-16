#include "Character.h"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

namespace state{

 Character::Character(){
     this->x=0;
     this->y=0;
     
    /*sf::Vector2i anim(1,Down);
    sf::Texture texture;
    sf::Sprite sprite;
    sprite.setPosition(100,100);
    texture.loadFromFile("Textures/personnage/TilePerso.png");
    sprite.setTexture(texture);*/
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
 
 void Character::attack(){
     
 }
 
 Character::~Character(){
     
 }
 

 
 
 
}