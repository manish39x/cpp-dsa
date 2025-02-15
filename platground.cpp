#include <iostream>
using namespace std;

int min_length(string s)
{
  int count = 1; // Always at least 1 unique character
  for (int i = 1; i < s.size(); i++)
  {
    if (s[i] != s[i - 1])
      count++;
  }
  return count;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    cout << min_length(s) << endl;
  }
  return 0;
}