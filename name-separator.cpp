
#include <iostream>
using namespace std;
/*
-What dose this code do?
In this assignment an array of strings given to me and I must output every letter of it like the example below
the code.
-How I managed to do this assignment and explanation of it:
It starts with making a loop to iterate every name of the array then assigning it's value to a new string
//string name = friends[i];\\
Then output the name with some styling.
The idea of assigning the value to a new string is to use it to iterate on every character of it using another
loop that ends with the end of the string
//for(int j=0;j<size(name);j++)\\
By this way I can now output every character by using:
 //name[j]\\, notice that we can also use this method :
 //name.at(j)\\.
There Is some styling like the first and last letter that I used if condition to achieve.
*/

int main()
{
  string friends[] = {"Ahmed", "Osama", "Ameer"}; // the given array

  for (int i = 0; i < size(friends); i++)
  {
    string name = friends[i];
    cout << "\n=========\n"
         << "= " << name << " =\n"
         << "==================\n";
    for (int j = 0; j < size(name); j++)
    {
      if (j==0)
      {
        cout<<"== "<<name[j];
      }
      else if (j==size(name)- 1)
      {
        cout<<", "<<name[j]<<" =\n";
      }
      else
      cout<<", "<<name[j];
    }
    cout<<"==================\n";
  }
}

// Output Needed
// =========
// = Ahmed =
// ==================
// == A, h, m, e, d =
// ==================

// =========
// = Osama =
// ==================
// == O, s, a, m, a =
// ==================

// =========
// = Ameer =
// ==================
// == A, m, e, e, r =
// ==================
