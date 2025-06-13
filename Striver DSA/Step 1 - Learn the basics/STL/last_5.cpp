#include <iostream>
#include <vector>
#include <algorithm>  // for sort, next_permutation, min_element, max_element
using namespace std;

int main() {
     vector<int> v = {3, 1, 2};

    // Sort the vector
     sort(v.begin(), v.end()); // v becomes {1, 2, 3}
     cout << "Sorted: ";
    for (int x : v)  cout << x << " ";
     cout << "\n";

    // Next permutation
     next_permutation(v.begin(), v.end()); // v becomes {1, 3, 2}
     cout << "Next Permutation: ";
    for (int x : v)  cout << x << " ";
     cout << "\n";

    // Builtin popcount
    int num = 13;  // Binary: 1101
     cout << "Popcount of 13: " << __builtin_popcount(num) << "\n";

    // min_element and max_element
    auto min_it =  min_element(v.begin(), v.end());
    auto max_it =  max_element(v.begin(), v.end());
     cout << "Min: " << *min_it << ", Max: " << *max_it << "\n";

    return 0;
}