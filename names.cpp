#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//function prototypes
void openFiles(string name[]);
void printFiles(string name[]);

int main()
{
  string name[8]; 
  openFiles(name[8]);
  printFiles(name[8]);
return 0;
}

//function definitions

void openFiles(string name[])
{
  ifstream fin;
  fin.open("names.txt");
  int x;
  for(x=0; x<8; x++)
    {
      //fin >> name[x];
      //name[x] = name[x];
      getline(fin, name[x]);
    } 
  fin.close();
  
return;
}
    
void printFiles(string name[])
{
  if(int x=0; x<8; x++)
      cout << name[x] <<endl;
  
  return;  
}  
      
      
