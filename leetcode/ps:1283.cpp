#include <bits/stdc++.h>
using namespace std;

int division(vector<int> &nums, int divisor)
{
  int ans = 0;
  for (int num : nums)
  {
    ans += (num +);
  }
  return ans;
}

int smallestDivisor(vector<int> &nums, int threshold)
{
  int left = *min_element(nums.begin(), nums.end());
  int right = *max_element(nums.begin(), nums.end());
  int ans = -1;
  while (left <= right)
  {
    int mid = left + (right - left) / 2;
    cout << "ask: " << mid << " : " << division(nums, mid) << endl;
    if (division(nums, mid) <= threshold)
    {
      ans = mid;
      right = mid - 1;
    }
    else
    {
      left = mid + 1;
    }
  }
  return ans;
}

int main()
{
  vector<int> nums = {44, 22, 33, 11, 1};
  int th = 5;
  int as = smallestDivisor(nums, th);
  cout << as << endl;
  return 0;
}