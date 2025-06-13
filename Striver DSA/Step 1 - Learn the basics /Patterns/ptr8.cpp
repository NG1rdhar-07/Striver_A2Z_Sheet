#include <bits/stdc++.h>
using namespace std;

void pattern8(int number)
{
    for (int i = 0; i<number; i++)
    {
        for (int j =0; j<i; j++)
        {
            cout << " ";
        }

        int x =(2*(number - i))-1; // these are the number of times stars will be printed correponding to each line !!

        while(x>0)
        {
            cout << "*";
            x--;
        }

        cout << "\n";
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern8(lines);
    return 0;
}