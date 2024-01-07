#include <iostream>
using namespace std;
/*
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
 */

void printaPattern(int N)
{
    for (int i = 1; i <= 2 * N - 1; i++)
    {
        int stars = i;
        if (i > N)
            stars = 2 * N - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    printaPattern(5);
    return 0;
}