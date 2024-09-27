#include <bits/stdc++.h>
using namespace std;

int reverseTheNumber(int n)
{
  int originalNumber = n;
  long long reverseNumber = 0;
  while (n != 0)
  {
    reverseNumber = (reverseNumber * 10) + (n % 10);
    n = n / 10;
  }
  cout << "reverse of " << originalNumber << " is: " << reverseNumber << endl;
  return reverseNumber;
}
int countDigit(int n)
{
  int x = ((int)log10(n)) + 1;
  cout << x << endl;
  return x;
}
int isArmStrongNumber(int n)
{
  int asNum = 0;
  int copy = n;
  while (n != 0)
  {
    int last = n % 10;
    asNum += (last * last * last);
    cout << asNum << " " << last << endl;
    n /= 10;
  }
  if (asNum == copy)
  {
    cout << "Yes it is" << endl;
    return true;
  }
  else
  {
    cout << "No it isn't" << endl;
    return false;
  }
}
void printAllDivisors(int n)
{
  int x = n;
  vector<int> ls;
  for (int i = 1; i < x; i++)
  {
    if (n % i == 0)
    {
      x = n / i;
      if (x == i)
      {
        ls.push_back(x);
      }
      else
      {
        ls.push_back(i);
        ls.push_back(x);
      }
    }
  }
  sort(ls.begin(), ls.end());
  for (auto it : ls)
    cout << it << " ";

  // for (int i = 1; i <= n / 2; i++)
  // {
  //   if (n % i == 0)
  //   {
  //     cout << i << " ";
  //   }
  // }
  // cout << n << endl;
}
void isPrime(int n)
{
  int nof = 0;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      if (i == n / i)
        nof += 1;
      else
        nof += 2;
    }
  }
  if (nof == 2)
    cout << "This is a Prime number" << endl;
  else
    cout << "This is not a Prime number" << endl;
  // cout << nof << endl;
}
int findGCD(int x, int y)
{
  int minNo = min(x, y);
  int gcd = 1;
  for (int i = minNo; i > 0; i--)
  {
    if (x % i == 0 && y % i == 0)
    {
      cout << "GCD of " << x << " and " << y << " is " << i << endl;
      gcd = i;
      break;
    }
  }
  return gcd;
}
// Find gcd with Euclidean Algorithm.
void fGCD(int x, int y)
{
  while (x > 0 && y > 0)
  {
    if (x >= y)
      x = x % y;
    else
      y = y % x;
  }
  if (x == 0)
    cout << "GCD is " << y << endl;
  else
    cout << "GCD is " << x << endl;
}

int main()
{

  // reverseTheNumber(1534236469);
  // countDigit(23453);
  // isArmStrongNumber(371);
  // printAllDivisors(36);
  // isPrime(11);
  // findGCD(12, 24);
  fGCD(120, 12);
  return 0;
}