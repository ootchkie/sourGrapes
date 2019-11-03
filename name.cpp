#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//function prototypes
void openFiles(string&name[]);

int main()
{
  string name[8]; 
  openFiles();
  
return 0;
}

//function definitions

void openFiles(string&name[])
{
  ifstream fin;
  fin.open("names.txt");
  
  for(int x=0; x<8; x++)
    {
      fin >> name[x];
      name[x] = name[x];
    } 
  fin.close();
  
return;
}
    
