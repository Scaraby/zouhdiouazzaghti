#include "ElementSprite.h"
#include "SFML/Graphics.hpp"

using namespace rendu;
using namespace sf;
    
 ElementSprite::ElementSprite() { 
     
 }

    void ElementSprite::notifyPosX(int x) {
       this->setPosition(x, this->getPosition().y);
       
    }
    
    void ElementSprite::notifyPosY(int y){
        this->setPosition(this->getPosition().x,y);
    }
    
     ElementSprite::~ElementSprite() { 
     
 }


   
