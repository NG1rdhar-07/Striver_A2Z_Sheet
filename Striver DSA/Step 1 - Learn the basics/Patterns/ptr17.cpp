#include <bits/stdc++.h>
using namespace std;

void pattern17(int number)
{
    for (int i = 0; i<number; i++)
    {
        char prev = 'A';

        for (int j = 0; j < number-i-1; j++)
        {
            cout << " ";
        }

        for (int j = number-i-1; j < number ; j++)
        {
            cout << char(prev);
            prev ++;
        }
        

        for (int j =number; j<(number + i); j++)
        {
           cout << char(prev - 2);
           prev --;
        }

        cout << "\n";
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern17(lines);
    return 0;
}