#include <bits/stdc++.h>
using namespace std;

// def: encapsulation is wrapping up of data & member function in a single unit called class;
class Account
{
private:
  double balance;
  string password;

public:
  string accountId;
  string username;
};

// constructor
// def: spacial method invoked automatically at time of object creation. Used for initialisation.
// syntax:-
class Human
{
public:
  string race;
  string name;
  // constructor overloading: see we have 2 constructor when
  Human()
  {
    this->name = "Annonymas";
    this->race = "human";
  }
  Human(string name)
  {
    this->name = name;
    this->race = "human";
  }
  void talk()
  {
    cout << "Hey I'm " << name << " I'm from " << race << " race" << endl;
  }
};

int main()
{
  Human me("Manish");
  Human you;
  me.talk();
  you.talk();
  return 0;
}