#include <iostream>
using namespace std;
// ignore this file

int main()
{
string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
for (int i = 0; i <size(names); i++)
{
    string name=names[i];
    if (size(name)==5)
    {
        cout<<name<<endl;
    }
    
}

// Output Needed
// "Osama"
// "Ahmed"
// "Hagar"
// "Salwa"
}