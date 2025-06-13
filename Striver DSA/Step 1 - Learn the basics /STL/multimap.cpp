#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> mm;
    mm.insert({1, "apple"});
    mm.insert({2, "banana"});
    mm.insert({1, "cherry"});  // same key again

    for (auto &p : mm) {
        std::cout << p.first << " -> " << p.second << "\n";
    }
}
