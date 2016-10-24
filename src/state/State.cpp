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

	ifstream fin("test.txt"); 
  if(fin.is_open())
	{

    cout << "File Opened successfully!!!. Reading data from file into array" << endl;

		while(!fin.eof() && position < array_size)
		{
			fin.get(array[position]); 
			position++;
		}
		array[position-1] = '\0'; 
    
    cout << "Displaying Array..." << endl << endl;
    //this loop display all the charaters in array till \0 
		for(int i = 0; array[i] != '\0'; i++)
		{
			cout << array[i] << endl;
		}
		
		for(int i = 0; array[i] != '\0'; i++)
		{
			level[i]=array[i]-97 ;
		}
	
	    cout << "Displaying Level..." << endl << endl;
    //this loop display all the charaters in array till \0 
		for(int i = 0; i <array_size-1; i++)
		{
			cout << level[i] << endl;
		}
	
	}
	else 
		cout << "File could not be opened." << endl;
	}
	
   
}

State::~State(){
    
}
}

