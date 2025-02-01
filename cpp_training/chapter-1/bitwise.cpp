#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
  return ((n > 0) && (n & (n - 1)) == 0);
}

int reverseInt(int n)
{
  int reverse = 0;
  while (n > 0)
  {
    reverse = (reverse * 10) + (n % 10);
    n = n / 10;
  }
  return reverse;
}

int main()
{
  int n = 3453;
  cout << reverseInt(n) << endl;

  return 0;
}