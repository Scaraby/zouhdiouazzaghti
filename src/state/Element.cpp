#include "Element.h"
#include "rendu/PositionObs.h"


using namespace state;
using namespace rendu;
 
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
        for (auto a : obs) a->notifyPosX(x);
        
    }
    
    void  Element::setY (int y){
        this->y=y;
    }
    
    void Element::addPosObs(rendu::PositionObs* p){
        obs.push_back(p);
    }
    
