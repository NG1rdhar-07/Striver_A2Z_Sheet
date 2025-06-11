#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lst = {10, 20, 30}; // its a doubly linked list

    lst.push_front(5);   // Insert at front
    lst.push_back(40);   // Insert at back

    for (int x : lst) {
        std::cout << x << " ";
    }
    // Output: 5 10 20 30 40
}
