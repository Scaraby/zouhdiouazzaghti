#include "ElementList.h"
#include <vector>


using namespace state;
using namespace std;


ElementList::ElementList (std::vector<Element*> list){
    this->elements = list;
    
}



void ElementList::AddElement (Element* e){
    this->elements.push_back(e);
    
        
}


void ElementList::clearlist (){
    this->elements.clear();
    
}

