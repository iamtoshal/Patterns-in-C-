#include <iostream>
using namespace std;

/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */

void printPattern1(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = N - i - 1; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void printPattern2(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= N - i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    printPattern1(5);
    printPattern2(5);
    return 0;
}