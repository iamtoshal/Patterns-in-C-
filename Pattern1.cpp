#include <iostream>
using namespace std;

/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 */

void printPattern(int N)
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}