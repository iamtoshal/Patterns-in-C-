#include <iostream>
using namespace std;

/*
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
*/

void printPattern(int N)
{
    for (int i = 0; i < 2 * N - 1; i++)
    {
        for (int j = 0; j < 2 * N - 1; j++)
        {
            int top = i;
            int left = j;
            int right = 2 * N - 2 - i;
            int bottom = 2 * N - 2 - j;
            cout << (N - min(min(left, right), min(top, bottom)));
        }
        cout << endl;
    }
}

int main()
{
    printPattern(5);
    return 0;
}