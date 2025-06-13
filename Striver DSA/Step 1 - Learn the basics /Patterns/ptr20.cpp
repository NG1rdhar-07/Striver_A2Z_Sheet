#include <bits/stdc++.h>
using namespace std;

void pattern20(int number)
{
    for (int i = 0; i<(2*number)-1; i++)
    {
        if(i<number)
        {
            for(int j=0; j<i+1; j++)
            {
                cout << "*";
            }

            for(int j=i+1; j<((2*number)-i-1); j++)
            {
                cout << " ";
            }

            for(int j=((2*number)-i-1); j<(2*number); j++)
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

            for(int j=(2*number)-i-1; j<i+1; j++)
            {
                cout << " ";
            }

            for(int j=i+1; j<(2*number); j++)
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
    pattern20(lines);
    return 0;
}