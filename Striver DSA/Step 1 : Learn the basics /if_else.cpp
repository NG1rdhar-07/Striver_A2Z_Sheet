#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void studentGrade(int marks) {
        if(marks >= 90) {
            cout << "Grade A" << endl;
        }
        else if (marks >= 70) {
            cout << "Grade B" << endl;
        }
        else if (marks >= 50) {
            cout << "Grade C" << endl;
        }
        else if (marks >= 35) {
            cout << "Grade D" << endl;
        }
        else {
            cout << "Fail" << endl;
        }
    }
};

int main()
{
    int marks;
    cout << "marks = ";
    cin >> marks;

    Solution s;
    s.studentGrade(marks);  // Correct object-based method call

    return 0;
}




                            // Solution for online submission !!!

// class Solution {
// public:
//     void studentGrade(int marks) {
//         if(marks >= 90) {
//             cout << "Grade A" << endl;
//         }
//         else if (marks >= 70) {
//             cout << "Grade B" << endl;
//         }
//         else if (marks >= 50) {
//             cout << "Grade C" << endl;
//         }
//         else if (marks >= 35) {
//             cout << "Grade D" << endl;
//         }
//         else {
//             cout << "Fail" << endl;
//         }
//     }
// };