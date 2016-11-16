#include "Element.h"

namespace state{
 
    Element::Element(){
        this->x=100;
        this->y=100;
    }
    
    bool const Element::isStatic (){
    }
    
    int  Element::getX (){
        return this->x;
    }
    
    int  Element::getY (){
        return this->y;
    }
    
    void  Element::setX (int x){
        this->x=x;
    }
    
    void  Element::setY (int y){
        this->y=y;
    }
    
    
}