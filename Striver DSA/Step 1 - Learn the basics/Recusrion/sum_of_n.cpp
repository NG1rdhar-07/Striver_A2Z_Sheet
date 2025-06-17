#include <bits/stdc++.h>
using namespace std;

int printSum(int i, int num, int sum)
{
    if(i>num)
    return sum;
    printSum(i+1, num, sum+i);
}

int main() {
    cout << "Sum upto which no??\n";
    int n;
    cin >> n;
    cout << "\n";
    cout << printSum(1, n, 0);
    return 0;
}