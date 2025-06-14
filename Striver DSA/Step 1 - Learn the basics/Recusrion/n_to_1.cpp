#include <bits/stdc++.h>
using namespace std;
void print_1_to_n(int i, int num)
{
    if(i>num)
    return;

    print_1_to_n(i+1, num);
    cout << i << "\n";
}

int main() {
    cout << "How many numbers to print??\n";
    int n;
    cin >> n;
    cout << "\n";
    print_1_to_n(1, n);
    return 0;
}