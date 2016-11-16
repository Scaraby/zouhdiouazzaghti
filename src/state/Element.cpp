#include "Element.h"

namespace state{
 
    Element::Element(){
        this->x=0;
        this->y=0;
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