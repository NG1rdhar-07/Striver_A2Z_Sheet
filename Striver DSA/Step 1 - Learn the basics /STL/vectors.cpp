#include<bits/stdc++.h>

using namespace std;

int main() {
  vector < int > v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i); //inserting elements in the vector 0 -> 1 -> 2 ......-> 9
  }

  cout << "the elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();

  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at some location:" << endl;
  v.insert(v.begin()+3, 5);
  cout << "The fourth element is: " << v[3] << endl;
  cout << "Erasing the first element" << endl;
  v.erase(v.begin());
  cout << "Now the first element is: " << v[0] << endl;

  if (v.empty())
    cout << "\nvector is empty";
  else
    cout << "\nvector is not empty" << endl;

  v.clear();
  cout << "Size of the vector after clearing the vector: " << v.size();

}