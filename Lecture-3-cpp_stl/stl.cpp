// cpp stl divided into 4 parts
// Algotithms
// Containers
// Functions
// Iterators
// -----------now let's start--------
#include <bits/stdc++.h>
using namespace std;

// Pairs
void explainPairs()
{
  pair<int, int> p = {2, 6};
  cout << p.first << " " << p.second << endl;
  // nested pair
  pair<int, pair<int, int>> p2 = {1, {2, 4}};
  cout << p2.first << " " << p2.second.second << " " << endl;
  // it's treated as a datatype u can store it in a pair too.
  pair<int, int> arr[] = {{2, 3}, {3, 5}, {2, 6}};
  cout << arr[0].second << endl;
}
void explainVector()
{
  vector<int> vc;
  vc.push_back(1);
  vc.emplace_back(2);
  // TODO: google about why emplace_back is faster compare to push back;

  vector<pair<int, int>> vc2;
  vc2.push_back({2, 4});
  vc2.emplace_back(2, 6);

  // container of size 5 and value of 100
  vector<int> v(5, 100);
  // container of size 5 and full of garbage value
  // vector<int> v(5);

  vector<int>::iterator it = v.begin();
  it++;
  cout << *(v.begin()) << endl;

  // Erase
  // v.erase(v.begin(), v.begin() + 3);

  // Insert :: remember insert function in vector is costly so, you can use list.
  v.insert(v.begin() + 1, 2, 1011);
  // copy
  vector<int> copy(3, 46);
  v.insert(v.begin(), copy.begin() + 1, copy.end());

  for (auto it : v)
  {
    cout << it << " ";
    ;
  }

  cout << '\n'
       << "size of this vector: " << v.size() << endl;
}
void explainList()
{
  list<int> ls;

  ls.push_back(2);    // {2}
  ls.emplace_back(4); // {2, 4}

  ls.push_front(5);    // {5, 2, 4}
  ls.emplace_front(6); // {6, 5, 2, 4}
}
void explainDeque()
{
  deque<int> dq;

  dq.push_back(2);    // {2}
  dq.emplace_back(4); // {2, 4}

  dq.push_front(5);    // {5, 2, 4}
  dq.emplace_front(6); // {6, 5, 2, 4}

  dq.pop_back(); // {6, 5, 2}
  dq.pop_front();
}
void explainStack()
{
  stack<int> st;
  st.push(3);
  st.emplace(4);
  st.pop();
  st.top();
}
void explainQueue()
{
  // FIFO
}
void explainSet()
{
  // sorted
  // unique
}
void explainMultiSet()
{
  // sorted
  // same as set but duplicate element also exist
}
void explainMap()
{
  map<int, int> mp;
  map<int, pair<int, int>> mpp;

  mp[1] = 2;
  mp.emplace(2, 3);
}
//
int main()
{
  // explainPairs();
  // explainVector();
  // explainList();
  // explainDeque();
  // explainStack();
}
// greater<int> for desending order;
// Learn upper and lower bound - https://www.youtube.com/watch?v=edJ19qIL8WQ