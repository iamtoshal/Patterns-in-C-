#include <iostream>
using namespace std;

/*
=====A
====A B A
===A B C B A
==A B C D C B A
=A B C D E D C B A
*/
void printPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= N - i - 1; j++)
        {
            cout << "=";
        }

        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch << " ";
            if (j < breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
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