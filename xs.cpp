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
void merge_sort(vector<int> arr, int low, int high)
{
  if (low >= high)
    return;
  int mid = (low + high) / 2;
  merge_sort(arr, low, mid);
  merge_sort(arr, mid + 1, high);

  vector<int> temp;
  while (low < mid || mid + 1 < high)
  {
    if (arr[low] < arr[mid])
    {
      temp.insert(arr.begin(), arr[low]);
      low++;
    }
    else
    {
      temp.insert(arr.begin(), arr[mid]);
      mid++;
    }
  }
  for (auto it : temp)
  {
    cout << it << " ";
  }
  cout << endl;
}

//
//
int main()
{
  int n = 10;
  vector<int> arr = {2, 45, 36, 23, 5, 3, 44, 12, 1, 5};

  // selection_sort(arr, n);
  // bubble_sort(arr, n);
  // insertion_sort(arr, n);
  merge_sort(arr, 0, arr.size() - 1);

  // print -----------------
  for (auto it : arr)
  {
    cout << it << " ";
  }

  cout << endl;
  return 0;
}