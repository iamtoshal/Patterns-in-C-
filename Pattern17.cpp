#include <iostream>
using namespace std;

/*
E
E D
E D C
E D C B
E D C B A
*/

void printPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)(64 + N - j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}