#include <bits/stdc++.h>
using namespace std;

int decimal_to_binary(int num)
{
  int binary = 0;
  int cnt = 0;
  while (num != 0)
  {
    int remainder = num % 2;
    binary = binary + (remainder * pow(10, cnt));
    num = num / 2;
    cnt++;
  }
  cout << binary << endl;
  return binary;
}

int main()
{
  decimal_to_binary(50);
}