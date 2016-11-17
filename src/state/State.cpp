#include "State.h"
#include <iostream> 
#include <stdlib.h> 
#include <vector>
#include <fstream>
using namespace std;

namespace state {
State::State() : characters(NULL) {
      
  
  }
	
void State::setlevel(){
    int array_size = 128;
  vector<char> array(array_size);
  int position = 0; 
  level.resize(128);
  ifstream fin("src/test.txt"); 
  if(fin.is_open()){

    cout << "File Opened successfully!!!. Reading data from file into array" << endl;
    while(!fin.eof() && position < array_size)	{
        fin.get(array[position]); 
	position++;
	}
   
    
    cout << "Displaying Array..." << endl << endl;
    //this loop display all the charaters in array till \0 
 
		
    for(size_t i = 0; i<array.size(); i++)
	{
	level[i]=array[i]-97 ;
	}
	
     cout << "Displaying Level..." << endl << endl;
    //this loop display all the charaters in array till \0 

	
}
	
  else cout << "File could not be opened." << endl;
}

void State::setCharacter(Character* c){
    this->characters = c;
}

State::~State(){
    
}
}

