#include <iostream>
using namespace std;

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

void printPattern(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= N - i - 1; j++)
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