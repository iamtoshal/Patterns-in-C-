#include <iostream>
using namespace std;

/*
A B C D E
A B C D
A B C
A B
A
*/

void printPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= N - i - 1; j++)
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