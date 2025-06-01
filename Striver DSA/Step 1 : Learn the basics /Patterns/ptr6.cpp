#include <bits/stdc++.h>
using namespace std;

void pattern6(int number)
{
    for (int i = 0; i<number; i++)
    {
        for (int j =0; j<number-i; j++)
        {
            cout << j+1;
        }
        cout << "\n";
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern6(lines);
    return 0;
}