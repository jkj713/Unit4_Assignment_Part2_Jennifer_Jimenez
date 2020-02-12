/*
Jennifer Jimenez
Dr_T
Unit 4 Part 2
Adding Hello while counting numbers
*/

#include <iostream>
using namespace std;

int main() 
{
int input = 0;

       cout << "\nPlease enter a stopping point: ";
       cin >> input;

       for(int i = 1; i <= input; i++)
       {
          if( (i % 10) == 1)
          {
            cout << i << "st Hello" << endl;
          }
          if( (i % 10) == 2)
          {
            cout << i << "nd Hello" << endl;
          }
          if( (i % 10) == 3) 
          {
            cout << i << "rd Hello" << endl; 
          }
         if( ((i % 10) == 4) || ((i % 10) == 5) ) 
          {
            cout << i << "th Hello" << endl; 
          }
          if( ((i % 10) == 6) || ((i % 10) == 7) )
          {
            cout << i << "th Hello" << endl;
          }
          if( ((i % 10) == 8) || ((i % 10) == 9) )
          {
            cout << i << "th Hello" << endl; 
          }
          if( ((i % 10) == 10) || ((i % 10) == 11) )
          {
            cout << i << "th Hello" << endl; 
          }
          if( ((i % 10) == 12) || ((i % 10) == 13) )
          {
            cout << i << "th Hello" << endl; 
          }
          if( ((i % 10) == 14) || ((i % 10) == 15) )
          {
            cout << i << "th Hello" << endl; 
          }
          if( ((i % 10) == 16) || ((i % 10) == 17) )
          {
            cout << i << "th Hello" << endl; 
          }if( ((i % 10) == 18) || ((i % 10) == 19) )
          {
            cout << i << "th Hello" << endl; 
          }

         }
  return 0;
}