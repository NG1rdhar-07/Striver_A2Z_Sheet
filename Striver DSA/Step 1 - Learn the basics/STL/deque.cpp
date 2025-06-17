#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1);
    
    dq.push_front(2);  // [2, 1]
    
    cout << "Front: " << dq.front() << endl; // 2
    cout << "Back: " << dq.back() << endl;   // 1
    
    dq.pop_front();   // [1]
    cout << "After pop_front: " << dq.front() << endl; // 1
}


//      dq.pop_back()       dq.front()           dq.back()          Access i-th Element : dq[i]