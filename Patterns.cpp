/*
Title: Pattern Display
File Name: Patterns.cpp
Programmer: Kason Steiner
Date: 11/2024
Display 2 seperate columns showing astericks in a row. Row A will be ascending
from 1 to 10. Row B will be descending from 10 to 1. Have them produce the 
by using loops.
*/  

#include <iostream>

using namespace std;
int main() {
  

char stars = '*';

  cout << "---------\n";
  cout << "Pattern A\n";
  cout << "---------\n";
  
  for (int rows = 0; rows < 10; rows++)
    {
      for(int columns = 0; columns <= rows; columns++)
        {
          cout << stars;
        }
      cout << endl;
    }
  
  //Inverted Pattern B
  cout << "---------\n";
  cout << "Pattern B\n";
  cout << "---------\n";

  for (int rows = 10; rows >= 1; --rows)
    {
      for(int columns = 1; columns <= rows; ++columns)
        {
          cout << stars;
        }
      cout << endl;
    }


return 0;
}