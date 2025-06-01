#include <bits/stdc++.h>
using namespace std;

void pattern12(int number)
{
    for (int i = 0; i<number; i++)
    {
        for (int j =0; j<i+1; j++)
        {
            cout << j+1;
        }

       for (int j =i+1; j<((2*number)-i-1); j++) // refer notebook (page Jan 02)
        {
            cout << " ";
        }

        for(int j = ((2*number)-i-1); j< 2*number; j++)
        {
            cout << (2*number) - j;
        }

        cout << "\n";
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern12(lines);
    return 0;
}