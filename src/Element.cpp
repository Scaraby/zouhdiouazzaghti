#include "Element.h"

Element::Element(){
    x=0;
    y=0;
}

Element::~Element(){
    
}

Element::getY(){
    return this->y;
}

Element::getX(){
    return this->x;
}

Element::setX(int x){
    this->x=x;
}

Element::setY(int y){
    this->y=y;
}