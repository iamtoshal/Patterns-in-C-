#include <iostream>
using namespace std;

/*
 *========*
 **======**
 ***====***
 ****==****
 **********
 ****==****
 ***====***
 **======**
 *========*
 */

void printPattern(int N)
{
    int spaces = 2 * N - 2;

    for (int i = 1; i <= 2 * N - 1; i++)
    {
        int stars = i; // stars as per rows

        if (i > N)
        {
            stars = 2 * N - i;
        }

        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << "=";
        }

        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < N)
        {
            spaces -= 2;
        }
        else
        {
            spaces += 2;
        }
    }
}

int main()
{
    printPattern(5);
    return 0;
}