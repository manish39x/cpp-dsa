#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {-1, 0, 1, 2, -1, -4};
  int n = nums.size();
  vector<vector<int>> ans;
  vector<vector<int>> result;
  for (int i = 0; i < n - 2; i++)
  {
    vector<int> triplet;
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        triplet.push_back(nums[i]);
        triplet.push_back(nums[j]);
        triplet.push_back(nums[k]);
        ans.push_back(triplet);
        triplet = {};
      }
    }
  }

  for (auto it : ans)
  {
    int temp_ans = 0;
    for (auto el : it)
    {
      temp_ans += el;
      cout << el << " ";
    }
    cout << " : " << temp_ans << endl;
    if (temp_ans == 0)
    {
      result.push_back(it);
    }
  }

  return 0;
}