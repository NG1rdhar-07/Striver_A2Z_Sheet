#include <bits/stdc++.h>
using namespace std;

void pattern11(int number)
{
    for (int i = 0; i<number; i++)
    {
        int prev = -1;

        if(i % 2 == 0)
        {
            cout << "1";
            prev = 1;
        }
        

        else
        {
            cout << "0";
            prev = 0;
        }


        for (int j =0; j<i; j++)
        {
            if(prev == 0)
            {
                cout << "1";
                prev = 1;
            }
            else
            {
                cout << "0";
                prev = 0;
            }
        }

        cout << "\n";
    }
}

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern11(lines);
    return 0;
}



/*  Another code...keep it simple :)

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    for(int i =0; i<5; i++)
    {
      bool x = true;
      
      if(i%2 != 0)
      x = false;
      
      for(int j=0; j< i+1; j++)
      {
        if(x)
        {
          cout << 1 << " ";
          x = false;    
        }
        
        else
        {
          cout << 0 << " ";
          x = true;
        }
        
      }
      cout << "\n";
    }
    return 0;
}


*/