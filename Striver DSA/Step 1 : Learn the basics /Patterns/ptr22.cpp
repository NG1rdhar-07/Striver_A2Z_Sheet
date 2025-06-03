#include <bits/stdc++.h>
using namespace std;

void pattern22(int number)
{
    for (int i = 0; i<(2*number)-1; i++)
    {
        if(i<=number-1)
        {
            int decrements = i;
            int r = number;
            int j = 0;

            while(j<(2*number)-2) // taaki j ke bahar na print ho !!
            {
                while(j<=(number-1))
                {
                    if(decrements > 0)
                    {
                        cout << r;
                        r--;
                        j++;
                        decrements--;
                    }

                    else if(decrements == 0)
                    {
                        cout << r+1;
                        j++;
                    }
                }


                while(j<(2*number)-i-1)  // jahan tak conStant chalega printed value !!
                    cout << r+1;
                    j++;

                for(int x = (2*number)-i-1; x<(2*number)-1; x++) // jahan pe changes aane start honge
                {
                    cout << r;
                    r--;
                }
                
            }
            cout << "\n";
        }
         
        
        else
        {
            int decrements = (2*number)-i-2;
            int r = number;
            int j = 0;

            while(j<(2*number)-2)
                {
                    while(j<=(number-1))
                    {
                        if(decrements > 0)
                        {
                            cout << r;
                            r--;
                            j++;
                            decrements--;
                        }

                        else if(decrements == 0)
                        {
                            cout << r+1;
                            j++;
                        }
                    }

                    while(j<i+1)  // jahan tak conStant chalega printed value !!
                        cout << r+1;
                        j++;

                    for(int x = i+1; x<(2*number)-1; x++) // jahan pe changes aane start honge
                    {
                        cout << r;
                        r--;
                    }

                }
            }

        }
    
    }


int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern22(lines);
    return 0;
}