// This program demonstrates an iterator with a map.
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
  // Create a map containing employee IDs and names.
  map<int, string> employees = 
    {
     {1,"John Lennon"},
     {2,"Paul McCartney"},
     {3,"George Harrison"},
     {4,"Ringo Starr"}
    };

  // Create an iterator.
  map<int, string>::iterator iter;
  
  // Use the iterator to display each element in the map.
  for (iter = employees.begin(); iter != employees.end(); iter++)
    {
      cout << "ID: " << iter->first 
	   << "\tName: " << iter->second << endl;
    }
  
  return 0;
} 
