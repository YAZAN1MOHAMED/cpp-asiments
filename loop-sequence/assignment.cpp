#include <array>
#include <iostream>
using namespace std;

/*
    In this assignment I asked to output the following sequence:
    10
    100
    10000
    100000000
    with for loop and while loop.
    it starts with outputting number 1 and making the condition i*=2 as the number of 0 that will be outputted
    by making another loop (j) and with the stop condition (j<=i)
*/
int main()
{
    for (int i = 1; i < 9; i *= 2)
    {
        cout << 1;
        for (int j = 1; j <= i; j++)
        {
            cout << 0;
        }
        cout << endl;
    }
    cout << "\n=============\n";
    int i = 1;
    while (i < 9)
    {
        int j = 1;
        cout << 1;
        while (j <= i)
        {
            cout << 0;
            j++;
        }
        cout << endl;
        i *= 2;
    }
}
