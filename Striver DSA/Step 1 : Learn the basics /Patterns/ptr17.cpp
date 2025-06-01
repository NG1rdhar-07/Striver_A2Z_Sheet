#include <bits/stdc++.h>
using namespace std;

void pattern17(int number)
{
//     for (int i = 0; i<number; i++)
//     {
//         int r = i;
//         for (int j = 0; j < number-i-1; j++)
//         {
//             cout << " ";
//         }

//         for (int j = number-i-1; j < number ; j++)
//         {
//             cout << char('A' + r);
//             r++;
//         }
        

//         for (int j =number; j<(number + i); j++)
//         {
//            cout << char('A' + r - 2);
//            r--;
//         }

//         cout << "\n";
//     }
// }

int main() {
    int lines;
    cout << "Enter Number of lines to print: "; 
    cin >> lines;
    pattern17(lines);
    return 0;
}