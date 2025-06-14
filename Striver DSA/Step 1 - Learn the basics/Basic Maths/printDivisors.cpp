#include <bits/stdc++.h>
using namespace std;

vector<int> printDiv(int num)
{
    vector<int> divs;
    int sr = sqrt(num);
    for (int x = 1; x <= sr; x++)
    {
        if (num % x == 0)
        {
            divs.push_back(x);
            if (x != num / x)
                divs.push_back(num / x); // paired divisor!
        }
    }
    return divs;
}


int main()
{
    cout << "Enter number for divisors\n";
    int number;
    cin >> number;

    vector<int> divs = printDiv(number);

    cout << "Divisors are:\n";
    for (int i = 0; i < divs.size(); ++i)
    {
        cout << divs[i] << " ";
    }

    return 0;
}