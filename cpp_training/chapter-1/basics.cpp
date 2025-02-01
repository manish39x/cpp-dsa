#include <bits/stdc++.h>
using namespace std;

// make a sqrt function
int sqrt(float n)
{
  float x = pow(n, 0.5);
  return int(x);
}

int main()
{
  int x = 999999999999;
  cout << x;

  return 0;
}

// cout << sizeof(x) << endl;
// cout << sizeof('d') << endl;
// cout << sizeof("") << endl;
// cout << (358495845994949) << endl;
// cout << sizeof(true) << endl;

/* CODE'S 0 & 1 FORM[BINARY, DECIMAL, OCTAL, HEXADECIMAL]
  int number1 = 15;         // Decimal
  int number2 = 017;        // Octal
  int number3 = 0x0F;       // Hexadecimal
  int number4 = 0b00001111; // Binary

  cout << "number1 : " << number1 << endl;
  cout << "number2 : " << number2 << endl;
  cout << "number3 : " << number3 << endl;
  cout << "number4 : " << number4 << endl;
*/

/* INPUT OUTPUT
 cout << "Hello c++20" << endl;
  int age;
  string name;

  int x;
  cout << "x = ";
  cin >> x;
  cin.ignore();

  cout << "Enter your name: ";
  getline(cin, name);

  cout << "Enter Your age: ";
  cin >> age;

  cout << "Hello " << name << " you are " << age << " year old" << endl;
  // cerr << "Error Message: Something went wrong" << endl;
  // clog << "Log Message: Somthing Happened" << endl;
*/