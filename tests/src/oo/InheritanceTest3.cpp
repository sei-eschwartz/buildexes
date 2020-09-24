// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// More information about this example can be found here:
// https://stackoverflow.com/questions/15921372/c-virtual-table-layout-of-mimultiple-inheritance

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
	virtual Base1* clone() const;

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
	virtual Base2* clone() const;

protected:
	float data_Base2;
};

class Derived : public Base1, public Base2 {
public:
	Derived();
	virtual ~Derived() = default;
	virtual Derived* clone() const;
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

Derived::Derived() : Base1(), Base2()
{
	cout << "Derived Constructor";
	this->data_Base1 = 10;
	this->data_Base1_2 = 2.345;
}

Derived* Derived::clone() const
{
	return nullptr;
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
}

float Base1::myFloatFunction(long input)
{
	return 0.0f;
}

Base1* Base1::clone() const
{
	return nullptr;
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
}

Base2* Base2::clone() const
{
	return nullptr;
}
