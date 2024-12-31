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
void remove_dupli_from_array(vector<int> &arr)
{
  vector<int> ans = {arr[0]};
  int k = 1;
  for (int i = 1; i < arr.size(); i++)
  {
    if (arr[i] == arr[i - 1])
    {
      arr.erase(arr.begin() + i);
      i--;
    }
    else
    {
      ans.push_back(arr[i]);
      k++;
    }
  }
  cout << k << endl;
  for (auto it : arr)
  {
    cout << it << " ";
  }
  cout << endl;
}
void rotate_array(vector<int> &nums, int k)
{
  if (nums.size() < 2)
    return;
  reverse(nums.begin(), nums.end() - (k));
  reverse(nums.end() - k, nums.end());
  reverse(nums.begin(), nums.end());
}
void sliding_zeros(vector<int> &nums)
{
  int i = 0;
  int j = 1;
  while (i < nums.size() && j < nums.size())
  {
    if (nums[i] != 0)
    {
      i++;
      j++;
      continue;
    }
    if (nums[i] == 0)
    {
      if (nums[j] == 0)
      {
        j++;
        continue;
      }
      else
      {
        swap(nums[i], nums[j]);
        i++;
        j++;
      }
    }
  }
}
void union_array(vector<int> &arr1, vector<int> &arr2)
{
  int i = 0;
  int j = 0;
  vector<int> union_array;

  while (i < arr1.size() && j < arr2.size())
  {
    if (arr1[i] < arr2[j])
    {
      if (union_array.size() == 0 || arr1[i] != union_array.back())
        union_array.push_back(arr1[i]);
      i++;
    }
    if (arr1[i] == arr2[j])
    {
      if (union_array.size() == 0 || arr1[i] != union_array.back())
        union_array.push_back(arr1[i]);
      i++;
      j++;
    }
    if (arr2[j] < arr1[i])
    {
      if (union_array.size() == 0 || arr2[j] != union_array.back())
        union_array.push_back(arr2[j]);
      j++;
    }
  }
  while (i < arr1.size())
  {
    if (union_array.back() != arr1[i])
      union_array.push_back(arr1[i]);
    i++;
  }
  while (j < arr2.size())
  {
    if (union_array.back() != arr2[j])
      union_array.push_back(arr2[j]);
    j++;
  }

  for (auto it : union_array)
  {
    cout << it << " ";
  }
  cout << endl;
}
void intersection_array(vector<int> &arr1, vector<int> &arr2)
{
  int i = 0;
  int j = 0;
  vector<int> intercect_arr;

  while (i < arr1.size() && j < arr2.size())
  {
    if (arr1[i] == arr2[j])
    {
      intercect_arr.push_back(arr1[i]);
      i++;
      j++;
    }
    else
    {
      if (arr1[i] < arr2[j])
        i++;
      if (arr1[i] > arr2[j])
        j++;
    }
  }
  for (auto it : intercect_arr)
  {
    cout << it << " ";
  }
  cout << endl;
}
void missingNumber(vector<int> &nums)
{
  int n = nums.size();
  int sum = (n * (n + 1)) / 2;

  for (int i = 0; i < n; i++)
  {
    sum -= nums[i];
  }
  cout << sum << endl;
}
void findMaxConsecutiveOnes(vector<int> nums)
{
  int maxConsicutive = 0;
  int current = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == 1)
    {
      current++;
    }
    else if (nums[i] == 0)
    {
      maxConsicutive = max(maxConsicutive, current);
      current = 0;
    }
  }
  cout << max(maxConsicutive, current) << endl;
}
void singleNumber(vector<int> nums)
{
  int xore = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    xore = xore ^ nums[i];
  }
  cout << xore << endl;
}
//
//

int main()
{
  vector<int> arr = {1, 1, 0, 1, 1, 1};
  vector<int> arr1 = {2, 2, 3, 3, 5}; // 1, 2, 3, 5, 6, 7, 9, 10
  // find_second_largest_element(arr);
  // find_largest_element(arr);
  // is_sorted(arr);
  // remove_dupli_from_array(arr);
  // rotate_array(arr, 3);
  // sliding_zeros(arr);
  // intersection_array(arr, arr1);
  // union_array(arr, arr1);
  // missingNumber(arr);
  // findMaxConsecutiveOnes(arr);
  singleNumber(arr1);
  //
  //
  //
  //

  // for (auto it : arr)
  // {
  //   cout << it << " ";
  // }
  // cout << endl;
  // cout << is_sorted(arr) << endl;
  return 0;
}