#include <bits/stdc++.h>
using namespace std;
    bool isPrime(int num)
    {
        int ctr = 0;
        for(int i =1; i<=sqrt(num); i++)
        {
            if(num % i == 0)
            {
                ctr++;

                if(num%i != i) // jab number ka square root naa ho!!
                ctr++;
            }
        }
        if(ctr == 2)
        return true;

        return false;
    }

    int main() {
    cout << "Enter number to check prime or not:\n";
    int x;
    cin >> x;

    if(isPrime(x))
    cout << "Number is prime\n";
    else
    cout << "Number is not a prime number\n";
    
    return 0;
}