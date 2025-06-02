#include <bits/stdc++.h>
using namespace std;

void pattern19(int number)
{
    for (int i = 0; i<(2*number); i++)
    {
            if(i<number)
            {
                for(int j = 0; j<(number-i); j++)
                cout << "*";

                for(int j = (number-i); j<(number+i); j++)
                cout<< " ";

                for(int j = (number+i); j<(2*number); j++)
                cout << "*";
            }

            else
            {
                for(int j = 0; j<(i-number+1); j++)
                {
                    cout << "*";
                }

                for(int j =(i-number+1); j<(3*number)-i-1; j++)
                {
                    cout << " ";
                }

                for(int j =(3*number)-i-1; j<(2*number); j++)
                {
                    cout << "*";
                }
            }

        cout << "\n";
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern19(lines);
    return 0;
}