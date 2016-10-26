#include "State.h"
#include <iostream> 
#include <stdlib.h> 
#include <vector>
#include <fstream>
using namespace std;

namespace state {
State::State(){
    {    
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
	cout << array[i] << endl;
	}
		
    for(size_t i = 0; i<array.size(); i++)
	{
	level[i]=array[i]-97 ;
	}
	
     cout << "Displaying Level..." << endl << endl;
    //this loop display all the charaters in array till \0 
    for(int i = 0; i <array_size; i++)
    {
     cout << level[i] << endl;
    }
	
}
	
  else cout << "File could not be opened." << endl;
  }
	
   
}

State::~State(){
    
}
}

