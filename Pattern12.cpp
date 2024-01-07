#include <iostream>
using namespace std;

/*
====*====
===***===
==*****==
=*******=
*********
*********
=*******=
==*****==
===***===
====*====
*/

int erectPyramid(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << "=";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << "=";
        }
        cout << endl;
    }
}

int invertedPyramid(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "=";
        }
        for (int j = 0; j < 2 * N - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "=";
        }
        cout << endl;
    }
}

int main()
{
    erectPyramid(5);
    invertedPyramid(5);
    return 0;
}