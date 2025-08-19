#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
  string name;
  string country;
  int age;
  Human(string name, string country, int age)
  {
    this->name = name;
    this->country = country;
    this->age = age;
  }
  void talk()
  {
    cout << "Hi I am " << this->name << " and I'm " << this->age << " years old\n";
  }
};

class SuperHuman : public Human
{
public:
  SuperHuman(string name, string country, int age) : Human(name, country, age) {};
  void fly()
  {
    cout << "Flyingggg to the moonnnn...\n";
  }
};

int main()
{
  SuperHuman me("Manish", "India", 19);
  me.talk();
  me.fly();

  return 0;
}