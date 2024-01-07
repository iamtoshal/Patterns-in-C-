#include <iostream>
using namespace std;

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

void printPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}