#include <bits/stdc++.h>
using namespace std;

int shipWithinDays(vector<int> &weights, int days)
{
  int left = *max_element(weights.begin(), weights.end());
  int right = accumulate(weights.begin(), weights.end(), 0);
  int capacity = right;
  while (left <= right)
  {
    int mid = left + (right - left) / 2;
    int daysNeeded = calculateDays(weights, mid);
    if (daysNeeded <= days)
    {
      capacity = mid;
      right = mid - 1;
    }
    else
    {
      left = mid + 1;
    }
  }
  return capacity;
}
int calculateDays(vector<int> &weights, int capacity)
{
  int days = 1;
  int sum = 0;
  for (int weight : weights)
  {
    sum += weight;
    if (sum > capacity)
    {
      sum = weight;
      days++;
    }
  }
  return days;
}

int main()
{
  vector<int> nums = {3, 2, 2, 4, 1, 4};
  int cap = 6;
  int days = calculateDays(nums, cap);
  cout << days << endl;

  return 0;
}