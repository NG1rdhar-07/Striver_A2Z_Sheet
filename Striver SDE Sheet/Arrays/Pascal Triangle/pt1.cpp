#include <bits/stdc++.h>
using namespace std;

int pascalTriangleElement (int n, int r)
{
    long long final = 1;
    for(int i =0; i<r-1; i++)
    {
        final = final*(n-1-i);
        final = final/(i+1);
    }
    return final;
}

int main() {
    cout << "Enter row and column respectively\n";
    int r;
    int c;
    cin >> r >> c;
    cout << pascalTriangleElement(r,c) << " is the element at" << r << "," << c << " th position\n";
    return 0;
}