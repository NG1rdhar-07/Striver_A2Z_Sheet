#include <bits/stdc++.h>
using namespace std;

void pattern4(int number)
{
    for (int i = 0; i<number; i++)
    {
        for (int j =0; j<i+1; j++)
        {
            cout << i+1;
        }
        cout << "\n";
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern4(lines);
    return 0;
}