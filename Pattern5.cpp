#include <iostream>
using namespace std;

/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

void printPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}