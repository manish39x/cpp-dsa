#include <bits/stdc++.h>
using namespace std;

void pattern_1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern_2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern_3(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << j + 1;
    }
    cout << endl;
  }
}
void pattern_4(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << i + 1;
    }
    cout << endl;
  }
}
void pattern_5(int n)
{
  for (int i = n; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern_6(int n)
{
  for (int i = n; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      cout << j + 1;
    }
    cout << endl;
  }
}
void pattern_7(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int x = 0; x < (n - 1 - i); x++)
    {
      cout << " ";
    }
    // star
    for (int x = 0; x < ((i * 2) + 1); x++)
    {
      cout << "*";
    }
    // space
    for (int x = 0; x < (n - 1 - i); x++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
void pattern_8(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int x = 0; x < i; x++)
    {
      cout << " ";
    }
    // star
    for (int x = 0; x <= (((n * 2) - 1) - (i * 2) - 1); x++)
    {
      cout << "*";
    }

    // space
    for (int x = 0; x < i; x++)
    {
      cout << " ";
    }

    cout << endl;
  }
}
void pattern_10(int n)
{
  for (int i = 0; i < (n * 2 - 1); i++)
  {
    if (i < n)
    {
      for (int j = 0; j <= i; j++)
      {
        cout << "*";
      }
    }
    else
    {
      for (int j = (n * 2 - 1) - i; j > 0; j--)
      {
        cout << "*";
      }
    }
    cout << endl;
  }
}

void pattern_11(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if ((i + j) % 2 == 0)
      {
        cout << "1";
      }
      else
      {
        cout << "0";
      }
    }
    cout << endl;
  }
}
void pattern_12(int n)
{
  for (int i = 0; i < n; i++)
  {
    // number
    for (int j = 0; j <= i; j++)
    {
      cout << j + 1;
    }
    // space
    for (int j = 0; j < (n - i - 1) * 2; j++)
    {
      cout << " ";
    }
    // number
    for (int j = i; j >= 0; j--)
    {
      cout << j + 1;
    }
    cout << endl;
  }
}
void pattern_13(int n)
{
  int x = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      x++;
      cout << x << " ";
    }
    cout << endl;
  }
}
void pattern_14(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch;
    }
    cout << endl;
  }
}
void pattern_15(int n)
{
  for (int i = n; i > 0; i--)
  {
    for (char ch = 'A'; ch < 'A' + i; ch++)
    {
      cout << ch;
    }
    cout << endl;
  }
}
void pattern_16(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      char ch = 'A' + i;
      cout << ch;
    }
    cout << endl;
  }
}
void pattern_17(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < (n - i - 1); j++)
    {
      cout << "*";
    }
    // number
    for (int j = 0; j <= i; j++)
    {
      char ch = 'A' + j;
      cout << ch;
    }
    for (int j = i; j > 0; j--)
    {
      char ch = 'A' + (j - 1);
      cout << ch;
    }

    // space
    for (int j = 0; j < (n - i - 1); j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern_18(int n)

{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      char ch = 'A' + (n - i + j - 1);
      cout << ch;
    }
    cout << endl;
  }
}
void pattern_18_alternative(int n)
{
  char ch = 'A' + (n - 1);
  for (int i = 0; i < n; i++)
  {
    for (char j = ch - i; j <= ch; j++)
    {
      cout << j;
    }
    cout << endl;
  }
}
void pattern_19(int n)
{
  for (int i = 0; i < n; i++)
  {
    // star
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j < (n * 2 - ((n - i) * 2)); j++)
    {
      cout << " ";
    }
    // star
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = n - 1; i >= 0; i--)
  {
    // star
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j < (n * 2 - ((n - i) * 2)); j++)
    {
      cout << " ";
    }
    // star
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
}
void pattern_20(int n)
{
  int space = n * 2 - 2;
  for (int i = 0; i < n * 2 - 1; i++)
  {
    int star = n - space / 2;
    // star
    for (int j = 0; j < star; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j < space; j++)
    {
      cout << " ";
    }
    // star
    for (int j = 0; j < star; j++)
    {
      cout << "*";
    }
    cout << endl;
    if (i < n - 1)
      space -= 2;
    else
      space += 2;
  }
}
void pattern_21(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || i == n - 1)
      {
        cout << "*";
      }
      else
      {
        if (j == 0 || j == n - 1)
        {
          cout << "*";
        }
        else
        {
          cout << " ";
        }
      }
    }
    cout << endl;
  }
}
void pattern_22(int n)
{
  for (int i = 0; i < n * 2 - 1; i++)
  {
    for (int j = 0; j < n * 2 - 1; j++)
    {
      int left_distence = j;
      int right_distence = (n * 2 - 2) - j;
      int top_distence = i;
      int bottom_distence = (n * 2 - 2) - i;

      int min_distence = min(min(left_distence, right_distence), min(top_distence, bottom_distence));
      cout << n - min_distence;
    }
    cout << endl;
  }
}

int main()
{
  // pattern_1(5);
  // pattern_2(5);
  // pattern_3(5);
  // pattern_4(5);
  // pattern_5(5);
  // pattern_6(5);

  // pattern_7(5);
  // pattern_8(5);
  // pattern_10(5);
  // pattern_11(5);
  // pattern_12(5);
  // pattern_13(5);
  // pattern_14(5);
  // pattern_15(5);
  // pattern_16(5);
  // pattern_17(5);
  // pattern_18(5);
  // pattern_18_alternative(5);
  // pattern_19(5);
  // pattern_20(5);
  // pattern_21(6);
  // pattern_22(4);

  return 0;
}
