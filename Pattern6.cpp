#include <iostream>
using namespace std;

/*
A
A B
A B C
A B C D
A B C D E
*/

void printPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)(65 + j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}