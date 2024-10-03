#include <bits/stdc++.h>
using namespace std;

void find_largest_element(vector<int> arr)
{
  int max = 0;
  for (int i = 0; i < arr.size() - 1; i++)
  {
    if (max < arr[i])
      max = arr[i];
  }
  cout << max << endl;
}
void find_second_largest_element(vector<int> arr)
{
  int secondMax = 0;
  int max = 0;
  for (int i = 0; i <= arr.size() - 1; i++)
  {
    if (max < arr[i])
    {
      secondMax = max;
      max = arr[i];
    }
    if (arr[i] > secondMax && max > arr[i])
    {
      secondMax = arr[i];
    }
  }
  cout << secondMax << endl;
}
bool is_sorted(vector<int> arr)
{
  int leftChad = 0;
  int breakPoint = 0;
  for (int i = 0; i <= arr.size() - 1; i++)
  {
    cout << breakPoint << arr[i] << arr[i + 1] << " " << endl;
    if (breakPoint > 1 || leftChad > arr[i + 1])
      return false;
    if (arr[i] > arr[i + 1] || leftChad > arr[i + 1])
    {
      leftChad = arr[i];
      breakPoint++;
    }
  }
  return true;
}
int main()
{
  vector<int> arr = {2, 1, 3, 4};
  // find_second_largest_element(arr);
  // find_largest_element(arr);
  is_sorted(arr);
  // cout << is_sorted(arr) << endl;
}