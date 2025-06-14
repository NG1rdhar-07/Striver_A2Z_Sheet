#include <bits/stdc++.h>
using namespace std;

int getGCD (int p, int r){
    while(p > 0 && r > 0)
    {
        if(p>r)
        p = p%r;
        else
        r = r%p;
    }
    if(r == 0)
    return p;

    return r;
}

int main() {
    cout << "Enter 2 numbers\n";
    int a;
    int b;
    cin >> a >> b;
    int soln = getGCD(a,b);
    cout << "GCD of " << a << " and " << b <<" is " << soln;
    return 0;
}