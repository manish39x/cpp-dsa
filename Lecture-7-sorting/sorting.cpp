#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[10], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[min] > arr[j])
      {
        min = j;
      }
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}
void bubble_sort(int arr[10], int n)
{
  for (int i = 0; i < n; i++)
  {
    int swapCount = 0;
    for (int j = 0; j < n; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapCount++;
      }
    }
    if (swapCount == 0)
    {
      return;
    }
  }
}
void insertion_sort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int j = i;
    while (j > 0 && arr[j] < arr[j - 1])
    {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }
}
void merge(vector<int> &arr, int low, int mid, int high)
{
  vector<int> temp;
  int left = low;
  int right = mid + 1;
  while (left <= mid && right <= high)
  {
    if (arr[left] <= arr[right])
    {
      temp.push_back(arr[left]);
      left++;
    }
    else
    {
      temp.push_back(arr[right]);
      right++;
    }
  }
  while (left <= mid)
  {
    temp.push_back(arr[left]);
    left++;
  }
  while (right <= high)
  {
    temp.push_back(arr[right]);
    right++;
  }
  for (int i = low; i <= high; i++)
  {
    arr[i] = temp[i - low];
  }
}
void merge_sort(vector<int> &arr, int x, int y)
{
  int low = x;
  int high = y;
  if (low == high)
    return;
  int mid = (low + high) / 2;
  merge_sort(arr, low, mid);
  merge_sort(arr, mid + 1, high);
  merge(arr, low, mid, high);
}

int partition(vector<int> &arr, int low, int high)
{
  int pivot = arr[low];
  int i = low;
  int j = high;
  while (i < j)
  {
    while (arr[i] <= pivot && i <= high - 1)
    {
      i++;
    }
    while (arr[j] > pivot && j >= low - 1)
    {
      j--;
    }
    if (i < j)
      swap(arr[i], arr[j]);
  }
  swap(arr[low], arr[j]);
  return j;
}
void quick_sort(vector<int> &arr, int low, int high)
{
  if (low >= high)
    return;
  int pIndex = partition(arr, low, high);
  quick_sort(arr, low, pIndex - 1);
  quick_sort(arr, pIndex + 1, high);
}
//
//
int main()
{
  int n = 10;
  vector<int> arr = {5, 4, 6, 2, 1, 8, 7, 9, 3};
  int low = 0;
  int high = arr.size() - 1;

  // selection_sort(arr, n);
  // bubble_sort(arr, n);
  // insertion_sort(arr, n);
  // merge_sort(arr, low, high); // tc --> O(nlog2n) sc --> O(n)
  quick_sort(arr, low, high);

  // print -----------------
  for (auto it : arr)
  {
    cout << it << " ";
  }

  cout << endl;
  return 0;
}