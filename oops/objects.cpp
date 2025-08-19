#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
  string name;
  int *agePtr;
  Person(string name, int age)
  {
    this->name = name;
    agePtr = new int;
    this->agePtr = &age;
  }
  Person(Person &obj)
  {
    this->name = obj.name;
    agePtr = new int;
    *this->agePtr = *obj.agePtr;
  };

  // Destructur
  ~Person()
  {
    delete agePtr;
  }

  void talk()
  {
    cout << "Hey I'm " << this->name << endl;
  }
};

int main()
{
  return 0;
}