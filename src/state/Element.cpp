#include "Element.h"

namespace state{
 
    
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