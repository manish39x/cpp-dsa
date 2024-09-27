#include <bits/stdc++.h>
using namespace std;

// Function ----------------------------------
void printMyName(string name)
{
  cout << "My name is " << name << endl;
}
// here void is the return type, void means dose not return anything
// then there is function name it shoud be self explenetory +point
// inside the parenthisis there is paramiter

int sum(int a, int b)
{
  return a + b;
}

void changeByValue(int n)
{
  n += 100;
  cout << n << endl;
}
void changeByReference(int &n)
{
  n += 100;
  cout << n << endl;
}

int main()
{
  // ARRAY -----------------------------------
  // Array {1D array}
  // int arr[5];
  // cin >> arr[0];
  // cout << arr[0] << endl;

  // // 2D array
  // int arr2[3][5]; // --> Now how dose this array look like
  // left index determine row and right determine column
  // example: This 2D array will look somthing like this
  // * * * * *
  // * * # * *
  // * * * * *
  // now to get the value at # index = arr[1][2]

  // STRING -----------------------------------
  // cout << "Introduce your self" << endl;
  // string introduction;
  // getline(cin, introduction);
  // cout << introduction << endl;

  // string stores charecter in index like array
  // string name = "Manish";
  // // now how to extract "i" from this string
  // cout << name[3] << endl;

  // LOOPS -----------------------------------
  // this is the programing superpower
  // For loop
  // for (int i = 0; i < 10; i++)
  // {
  //   cout << "Mansih " << i + 1 << endl;
  //   // The thing you need to remember that this 'i' varriable exist only in this
  //   // curly braces [concept of scope]
  // }
  // while loop
  // int i = 0;
  // while (i < 10)
  // {
  //   cout << (i + 1) * (i + 1) << endl;
  //   i++;
  // }

  // Calling a function ###################
  // printMyName("Manish");

  // int sum1 = sum(14, 25);
  // cout << sum1 << endl;

  // **VIP concept**
  // parameter pass by value or reference
  //         pass by value dose not change the value of original variable.
  int x = 10;
  changeByValue(x);
  cout << x << endl;

  //         pass by reference dose change the value of original variable.
  int y = 10;
  changeByReference(y);
  cout << y << endl;

  // Inbuild functions in c++ ------------------
  // cout << "maximum of 34 and 55 is " << max(34, 55) << endl;
  // cout << "minimum of 34 and 55 is " << min(34, 55) << endl;
  // remember you have to include the librery to use those functions since I have
  // included bits/stdc++.h (it incudes all libreries) there's no need to include
  // them individualy

  return 0;
}

// datatypes
// int, long, long long, float, double
// string and getline
// char
