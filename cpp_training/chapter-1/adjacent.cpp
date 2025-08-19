#include <bits/stdc++.h>
using namespace std;
int adjBloomCount(vector<int> bloomDay, int k, int day)
{
  int cnt = 0;
  int iter = 0;
  for (int i = 0; i < bloomDay.size(); i++)
  {

    if (bloomDay[i] <= day)
    {
      iter += 1;
      if (iter == 3)
      {
        cnt += 1;
        iter = 0;
      }
    }
    else
    {
      iter = 0;
    }
  }

  return cnt;
}

int main()
{
  vector<int> nums = {1, 10, 3, 10, 2};
  int k = 1;
  int ans = adjBloomCount(nums, k, 3);
  cout << ans << endl;
  return 0;
}