#include <bits/stdc++.h>
using namespace std;

void change(int *ptr) // pass by references
{
  *ptr = 20;
}
void change_by_ref(int &a) // pass by alias
{
  a = 20;
}

int main()
{
  // int a = 10;
  // int *ptr_a = &a;     // pointer
  // int **ptr2 = &ptr_a; // pointer to pointer
  // cout << &a << endl;
  // cout << &ptr_a << endl; // & --> address of operator
  // cout << ptr2 << endl;
  // cout << *(ptr_a) << endl; // * --> dereference operator
  // cout << **(ptr2) << endl; // ** --> dereference operator(get value from pointer to pointer)

  // int a = 10;
  // change(&a);
  // cout << a << endl;

  int arr[] = {1, 2, 3, 4};
  int a = 9;
  // cout << a << endl;
  cout << *arr << endl;
  cout << *(arr + 1) << endl;
  cout << *(arr + 2) << endl;
  cout << *(arr + 3) << endl;

  return 0;
}
