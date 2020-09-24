#include <iostream>
using namespace std;

struct TestData {
  char* Name;
  char* Surname;
  int number;
  float fl;
  long longNumber;
};

class Base1 {
 public:
  Base1();
  virtual ~Base1();
  virtual void speakClearly();
  virtual float myFloatFunction(long input);

 protected:
  float data_Base1;
  double data_Base1_2;
  TestData data_Base1_3;
};

class Base2 {
 public:
  Base2();
  virtual ~Base2();
  virtual void mumble();

 protected:
  float data_Base2;
};

class Derived : public Base1, public Base2 {
 public:
  Derived();
  virtual ~Derived() = default;
  int doSomething();

 protected:
  float data_Derived;
};

int main() {
  cout << "Main";
  Derived* x = new Derived();
  x->mumble();
  x->speakClearly();
  int num = x->doSomething();
  Derived* y = new Derived();
  y->mumble();
  y->~Derived();
  delete y;
  delete x;
}

Derived::Derived() : Base1(), Base2()
{
  cout << "Derived Constructor";
  this->data_Base1 = 10;
  this->data_Base1_2 = 2.345;
}

int Derived::doSomething()
{
  cout << "Derived doSomething";
  data_Base1_3.number = 10;
  data_Base1_3.longNumber = 123456789101112;
  data_Base1_3.fl = myFloatFunction(data_Base1_3.longNumber);
  data_Base2 = 3.14159265359;
  return data_Base1_3.number;
}

Base1::Base1()
{
  cout << "Base 1 Constructor";
  this->data_Base1 = 0;
  this->data_Base1_2 = 0;
  this->data_Base1_3.fl = 0;
  this->data_Base1_3.longNumber = 123;
  this->data_Base1_3.Surname = nullptr;
  this->data_Base1_3.Name = nullptr;
}

Base1::~Base1()
{
  cout << "Base 1 Destructor";
  this->data_Base1 = 0;
  this->data_Base1_2 = 0;
  this->data_Base1_3.fl = 0;
}

void Base1::speakClearly()
{
  return;
}

float Base1::myFloatFunction(long input)
{
  return 0.0f;
}

Base2::Base2()
{
  this->data_Base2 = 3.456;
}

Base2::~Base2()
{
  this->data_Base2 = 0.0;
}

void Base2::mumble()
{
  return;
}
