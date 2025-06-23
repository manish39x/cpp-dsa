#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<vector<int>> arr = {{1, 3}, {2, 4}, {5, 7}};
  sort(arr.begin(), arr.end(), [](const vector<int> &a, const vector<int> &b)
       { return a[0] < b[0]; });
  vector<vector<int>> result = {};
  for (int i = 0; i < arr.size(); i++)
  {
    if (result.size() == 0)
    {
      result.push_back(arr[i]);
      continue;
    }
    if (result.back()[1] >= arr[i][0])
    {
      result.back()[1] = arr[i][1];
    }
    else
    {
      result.push_back(arr[i]);
    }
  }

  for (const auto &i : result)
  {
    cout << "[" << i[0] << ", " << i[1] << "]" << endl;
  };

  return 0;
}