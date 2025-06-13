#include <bits/stdc++.h>
using namespace std;

void pattern15(int number)
{
    for (int i = 0; i<number; i++)
    {
        for (int j =0; j<number-i; j++)
        {
           cout << char('A' + j);
        }

        cout << "\n";
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern15(lines);
    return 0;
}