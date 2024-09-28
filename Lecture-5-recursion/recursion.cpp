#include <bits/stdc++.h>
using namespace std;

int i = 0;
void print_n_number(int n)
{
  if (i > n)
    return;

  cout << i << " ";
  i++;
  print_n_number(n);
}
void print_name_n_times(int n, string name)
{
  if (i >= n)
    return;

  cout << name << endl;
  i++;
  print_name_n_times(n, name);
}
void print_n_to_1(int n)
{
  if (n < 1)
    return;

  cout << n << " ";
  print_n_to_1(n - 1);
}
int sum_of_first_n_number(int n)
{
  // int sum = (n * (n + 1)) / 2;
  // cout << sum;
  // return sum;

  // do it using recursion
  if (n == 0)
    return 0;

  // sum += n;
  // return sum_of_first_n_number(n - 1, sum);

  // now lets do it in a efficient way
  return n + sum_of_first_n_number(n - 1);
}
int factorial_of_n(int n)
{
  if (n < 1)
    return 1;

  return n * factorial_of_n(n - 1);
}
void reverseArray(int i, int arr[], int size)
{
  // Array is mutable.
  if (i >= size - i - 1)
    return;
  swap(arr[i], arr[size - i - 1]);
  reverseArray(i + 1, arr, size);
}
bool isPalendrom(int i, string str)
{
  if (i >= str.size() - i - 1)
  {
    cout << "it is Palendrom" << endl;
    return true;
  }
  else
  {
    if (!(str[i] == str[str.size() - i - 1]))
    {
      cout << "it is not a palendrom" << endl;
      return false;
    }
  }
  return isPalendrom(i + 1, str);
}

bool func(int l, int r, string str)
{
  if (l >= r)
    return true;
  if (!isalnum(str[l]))
    return func(l + 1, r, str);
  if (!isalnum(str[r]))
    return func(l, r - 1, str);

  if (tolower(str[l]) == tolower(str[r]))
    return func(l + 1, r - 1, str);
  else
    return false;
}
bool isItPalindrome(string s)
{
  int size = s.size() - 1;
  return func(0, size, s);
}

void printFibonachi(int x, int y)
{
  int sum = x + y;
  if (sum > 1000)
    return;

  cout << x << " ";
  printFibonachi(y, sum);
}

int main()
{
  // print_n_number(100);
  // print_name_n_times(15, "Manish");
  // print_n_to_1(10);
  // int x = sum_of_first_n_number(100);
  // int y = factorial_of_n(4);
  // int size = 5;
  // int arr[size] = {3, 4, 2, 5, 7};

  // reverseArray(0, arr, size);
  // for (auto it : arr)
  // {
  //   cout << it << " ";
  // }

  // cout << isPalendrom(0, "xoffeox");
  // cout << isItPalindrome("moM");

  printFibonachi(0, 1);

  cout << endl;
  return 0;
}

// Now lets understand what is recursion
// recursion is nothing but a function is calling itself until a spesific condition meet.
// but if u run a recursive funtion that has will naver gonna stop then u will
// get a error of Stack overflow.