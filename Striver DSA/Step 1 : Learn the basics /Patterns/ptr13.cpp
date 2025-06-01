#include <bits/stdc++.h>
using namespace std;

void pattern13(int number)
{
    int ctr = 1;
    for (int i = 0; i<number; i++)
    {
        for (int j =0; j<i+1; j++)
        {
            cout << ctr << " ";
            ctr ++;
        }

        cout << "\n";
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern13(lines);
    return 0;
}