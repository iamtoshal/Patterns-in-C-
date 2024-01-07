#include <iostream>
using namespace std;
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
 */

void printaPattern(int N)
{
    int start = 1;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }

        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

int main()
{
    printaPattern(5);
    return 0;
}