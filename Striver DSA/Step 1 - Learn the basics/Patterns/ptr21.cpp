#include <bits/stdc++.h>
using namespace std;

void pattern21(int number)
{
    for (int i = 0; i<number; i++)
    {
        if(i == 0 || i == number-1)

            {
                for(int j =0; j<number; j++)
                {
                    cout << "*";
                }
            }       

        else
            {
                for(int j =0; j<1; j++)
                cout << "*";

                for(int j=1; j<number-1; j++)
                cout << " ";

                for(int j =number-1; j<number; j++)
                cout << "*";
            }

       cout << "\n";
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern21(lines);
    return 0;
}