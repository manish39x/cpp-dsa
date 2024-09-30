#include <bits/stdc++.h>
using namespace std;

int frequency_array(int n, int arr[10])
{
  // this is called a hash array
  int hash[10] = {0};
  for (int i = 0; i < 10; i++)
  {
    hash[arr[i]] += 1;
  }
  return hash[n];
}
int frequency_string(string str, char ch)
{
  int hash[256] = {0};
  for (char ch : str)
  {
    int ascii = ch;
    hash[ascii] += 1;
  }
  return hash[(int)ch];
}
// HASHMAP
// ---> befor we used a hashed array but it takes a lot of memory!
// so insted of clasiclal array we can use map, unorder map, hashmap.
int frequencyHashmap(int n, int arr[10])
{
  // map<int, int> mpp;
  unordered_map<int, int> mpp;
  for (int i = 0; i < 10; i++)
  {
    mpp[arr[i]]++;
  }
  return mpp[n];

  // Q: when to use map and unordered_map?
  // --> it always recomended to use unordered_map first if time limit
  // exeeds use map.
  // ok but why?
  // --> map takes O(log n) for every case avarage, best or worst
  //     unordered_map takes O(1) for best and avarage but O(n) for worst.
  //     even though it takes linear time for worst case, but it happens
  //     very occetionaly when collision happens.
  // TODO: google about collision in unordered_map;
}
//
//
int main()
{
  int arr[10] = {4, 5, 3, 4, 2, 1, 4, 1, 2, 7};
  // cout << frequency_array(4, arr);
  // string str = "lsjfljATHDSKGHEBVLPSfqzomntraof";
  // cout << frequency_string(str, 'f');

  cout << frequencyHashmap(3, arr);

  cout << endl;
  return 0;
}

// #Problem statement: let assume we have an array {1, 3, 1, 3, 2, 5} like this.
// and we asked to find the frequency of a perticular number in this array.
// example: 1 appers 2 time so frequency is 2
// example: 2 appers 1 time so frequency is 1
// example: 5 appers 1 time so frequency is 1
// example: 9 appers 0 time so frequency is 0

// task: solve it with brut force and finds way to optimize it.
// --> allthough we can solve is using simple ittretion like taks a input a check if
// it match with every single element but if we get 'q' number of input then the time
// complexity will be O(qn).

// NOTE: inside main we can only assign 10^6 in a int
// NOTE: in global we can only assign 10^6 in a int