#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(15);
    
    cout << "Top: " << s.top() << endl; // 15
    
    s.pop();
    cout << "Top after pop: " << s.top() << endl; // 10
}
