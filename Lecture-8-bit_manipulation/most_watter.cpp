#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> container = {8, 7, 2, 1};
  int n = container.size();

  int most_watter = 0;
  int i = 0;
  int j = n - 1;
  while (i < j)
  {
    int watter = min(container[i], container[j]) * (j - i);
    most_watter = max(most_watter, watter);
    if (container[i] < container[j])
      i++;
    else
      j--;
  }
  cout << most_watter << endl;

  return 0;
}