#include "ia.h" 
#include "engine.h"
#include <stdlib.h>
#include "state.h"

using namespace engine;
using namespace ia;
using namespace state;


void IA::IAExecute (Character* c, Engine e){
    int x = std::rand() % 4;
    
    switch(x)
{
   case 0:
      e.moveElement(Right, c);
      break;

   case 1:
      e.moveElement(Left, c);
      break;

   case 2:
      e.moveElement(Right, c);
      break;

   case 3:
      e.moveElement(Left, c);
      break;
}

}
