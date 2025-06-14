#include <bits/stdc++.h>
using namespace std;

int printFactorial(int i, int num, int fact)
{
    if(i>num)
    return fact;

    printFactorial(i+1, num, fact*i);
}

int main() {
    cout << "Factorial upto which no??\n";
    int n;
    cin >> n;
    cout << "\n";
    cout << printFactorial(1, n, 1);
    return 0;
}