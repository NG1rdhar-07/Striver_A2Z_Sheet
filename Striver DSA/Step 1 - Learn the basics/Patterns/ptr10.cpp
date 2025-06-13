#include <bits/stdc++.h>
using namespace std;

void pattern10(int number)
{
    for (int i = 0; i<(2*number)-1; i++)
    {
        if(i<number)
        {
            for(int j=0; j<i+1; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }

        else if (i>=number)
        {
            for(int j=0; j<(2*number)-i-1; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern10(lines);
    return 0;
}