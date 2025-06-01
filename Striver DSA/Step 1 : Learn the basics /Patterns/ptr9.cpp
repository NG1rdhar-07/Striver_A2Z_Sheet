#include <bits/stdc++.h>
using namespace std;

void pattern9i(int number)
{
    for (int i = 0; i<number; i++)
    {
        for (int j =0; j<number-i-1; j++)
        {
            cout << " ";
        }

        int x =(2*(i+1))-1; // these are the number of times stars will be printed correponding to each line !!

        while(x>0)
        {
            cout << "*";
            x--;
        }

        cout << "\n";
    }
}



void pattern9ii(int number)
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
    pattern9i(lines);
    pattern9ii(lines);
    return 0;
}