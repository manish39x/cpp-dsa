#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {1, 0, -1, 0, -2, 2};
  int n = nums.size();
  vector<vector<int>> ans;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        for (int z = k + 1; z < n; z++)
        {
          if ((nums[i] + nums[j] + nums[k] + nums[z]) == 0)
          {
            vector<int> temp = {nums[i], nums[j], nums[k], nums[z]};
            sort(temp.begin(), temp.end());

            ans.push_back(temp);
          }
        }
      }
    }
  }
  for (auto el : ans)
  {
    for (auto num : el)
    {
      cout << num << " ";
    }
    cout << endl;
  }
  return 0;
}