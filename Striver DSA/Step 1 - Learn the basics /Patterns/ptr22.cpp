#include <bits/stdc++.h>
using namespace std;

void pattern22(int number)
{
    for (int i = 0; i < (2 * number) - 1; i++)
    {
        for (int j = 0; j < (2 * number) - 1; j++)
        {
            int decrements = min(min(i, j), min((2 * number - 2) - i, (2 * number - 2) - j));
            int r = number - decrements;
            cout << r;
        }
        cout << "\n";
    }
}

int main()
{
    int lines;
    cout << "Enter Number of lines to print: ";
    cin >> lines;
    pattern22(lines);
    return 0;
}