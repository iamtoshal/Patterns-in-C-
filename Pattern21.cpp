#include <iostream>
using namespace std;

/*
*****
*===*
*===*
*===*
*****
*/

void printPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == 0 || j == 0 || i == N - 1 || j == N - 1)
            {
                cout << "*";
            }
            else
            {
                cout << "=";
            }
        }
        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}