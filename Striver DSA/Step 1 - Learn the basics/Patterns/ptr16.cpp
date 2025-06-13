#include <bits/stdc++.h>
using namespace std;

void pattern16(int number)
{
    for (int i = 0; i<number; i++)
    {
        for (int j =0; j<i+1; j++)
        {
           cout << char('A' + i);
        }

        cout << "\n";
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern16(lines);
    return 0;
}