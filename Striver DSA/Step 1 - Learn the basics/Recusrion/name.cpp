#include <bits/stdc++.h>
using namespace std;

void printName(int x, int times)
{
    if(x>times)
    return;
    cout << "Noor\n";
    printName(x+1, times);
}

int main() {
    cout << "How many time name print??\n";
    int n;
    cin >> n;
    printName(1, n);
    return 0;
}