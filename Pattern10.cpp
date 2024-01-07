#include <iostream>
using namespace std;
/*
----*----
---***---
--*****--
-*******-
*********
 */

void printaPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << "-";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < N - i - 1; j++)
        {
            cout << "-";
        }
        cout << endl;
    }
}

int main()
{
    printaPattern(5);
    return 0;
}