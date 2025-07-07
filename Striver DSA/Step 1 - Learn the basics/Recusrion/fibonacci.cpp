#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n<=1)
    return n;

    int lst = n-1;
    int slst = n-2;

    return (lst) + (slst);
}

int main(){
    cout << "Enter number to finf fibonacci of:";
    int a;
    cin >> a;
    cout << fibo(a);
    return 0;
}