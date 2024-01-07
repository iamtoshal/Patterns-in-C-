#include <iostream>
using namespace std;

/*
A
B B
C C C
D D D D
E E E E E
*/

void printPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)(65 + i) << " ";
        }
        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}