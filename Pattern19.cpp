#include <iostream>
using namespace std;

/*
********
***--***
**----**
*------*
*------*
**----**
***--***
********
*/

void printPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << "-";
        }
        for (int j = 0; j < N - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // My Solution as Alternative for lower symmetry
    //  for (int i = 0; i < N; i++)
    //  {
    //      for (int j = 0; j <= i; j++)
    //      {
    //          cout << "*";
    //      }
    //      for (int j = 0; j < 2 * (N - i) - 2; j++)
    //      {
    //          cout << "-";
    //      }
    //      for (int j = 0; j <= i; j++)
    //      {
    //          cout << "*";
    //      }
    //      cout << endl;
    //  }

    int iniS = 2 * N - 2;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < iniS; j++)
        {
            cout << "-";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        iniS -= 2;
    }
}

int main()
{
    printPattern(4);
    return 0;
}