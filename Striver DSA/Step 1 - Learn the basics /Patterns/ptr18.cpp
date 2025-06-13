#include <bits/stdc++.h>
using namespace std;

void pattern18(int number)
{
    for (int i = 0; i<number; i++)
    {
        int r = i;

        for (int j =0; j<i+1; j++)
        {
            while (r >= 0)
            {
                cout << char('A' + (number-1) - r);
                r--;
            }
        }

        cout << "\n";
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern18(lines);
    return 0;
}