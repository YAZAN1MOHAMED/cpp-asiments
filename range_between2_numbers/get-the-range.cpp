#include <array>
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "enter two different numbers\n";
    cin >> num1 >> num2;
    cout<<"the range between "<<num1<<" and "<<num2<<" is: \n";
    if (num1 < num2)
    {
        for (int i = ++num1; i < num2; i++)
        {
            if (i % 2 == 1)
            {
                cout << i;
                if ((num2 % 2 == 0 && num2 - i == 1) || (num2 % 2 == 1 && num2 - i == 2))
                {
                    break;
                }
                else
                {
                    cout << ", ";
                }
            }
        }
    }
    else
    {
        for (int i = ++num2; i < num1; i++)
        {
            if (i % 2 == 1)
            {
                cout << i;
                if ((num1 % 2 == 0 && num1 - i == 1) || (num1 % 2 == 1 && num1 - i == 2))
                {
                    break;
                }
                else
                {
                    cout << ", ";
                }
            }
        }
    }
}
/*
  Test Case 1
  Number One: 1
  Number Two: 9
  Output: 3, 5, 7

  Test Case 2
  Number One: 2
  Number Two: 15
  Output: 3, 5, 7, 9, 11, 13

  Test Case 3
  Number One: 8
  Number Two: 2
  Output: 3, 5, 7
*/
