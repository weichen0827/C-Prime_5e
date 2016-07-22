#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int val = 10, *p = &val;


	cout << "p = " <<  p << ", *p = " << *p << endl;
	p++;

	cout << "P = " << p << ", *p = " << *p << endl;

	int i = 42;
	int *p1 = &i;
	*p1 = *p1**p1;
	cout << *p1 << endl;

	int a = 10;
	int &b = a;
	int *c = &b;
	cout << a << b <<*  c << endl;
	return 0;
}