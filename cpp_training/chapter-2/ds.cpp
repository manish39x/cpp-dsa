#include <bits/stdc++.h>
using namespace std;

int main()
{
  // int arr[5] = {2, 34, 3, 4, 5};
  // cout << sizeof(arr) / sizeof(int) << endl;
  vector<int> vec = {1, 2, 3};
  cout << vec.size() << endl;
  vec.push_back(4);
  cout << vec.size() << endl;
  cout << vec.capacity() << endl;
}