#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {1, 2, 3, 4};
  int n = nums.size();
  vector<int> ans(n);
  for (int i = 0; i < n; i++)
  {
    if (i == 0)
    {
      ans[i] = 1;
      continue;
    }
    ans[i] = ans[i - 1] * nums[i - 1];
  }
  for (int i = n - 2; i >= 0; i--)
  {
    ans[i] = ans[i] * nums[i + 1];
    nums[i] = nums[i] * nums[i + 1];
  }

  for (auto it : ans)
  {
    cout << it << endl;
  }

  return 0;
}