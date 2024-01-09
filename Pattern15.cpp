#include <iostream>
using namespace std;

/*
1--------1
12------21
123----321
1234--4321
1234554321
*/

void printPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }

        for (int j = 0; j < (2 * N - (2 * i + 2)); j++)
        {
            cout << "-";
        }

        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}