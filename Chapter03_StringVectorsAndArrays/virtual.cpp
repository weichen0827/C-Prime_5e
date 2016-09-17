#include <iostream>
using namespace std;


class A
{
public:
	A(){}
	~A(){}
	virtual void print()
	{
		cout << "This is A" << endl;
	}
	
};

class B:public A
{
public:
	B(){}
	~B(){}
	void print()
	{
		cout << "This is B" << endl;
	}
	
};

class C:public B
{
public:
	C(){}
	~C(){}
	void print()
	{
		cout << "This is C" << endl;
	}
	
};


int main(int argc, char const *argv[])
{
	A *p1 = new A;
	A *p2 = new B;
	A *p3 = new C;
	p1->print();
	p2->print();
	p3->print();

	delete p1;
	p1 = NULL;
	delete p2;
	p2 = NULL;
	delete p3;
	p3 = NULL;

	return 0;
}