#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int val = 1;
	int &val2 = val;

	cout << val2 <<endl;

	int &val3 = val2; 
	cout << val3 << endl;

	int *val4  = &val3;

	cout << &val4 << endl;

	val3 = 100;

	cout << val << " , " << val2 << " , " << val3 << " , " << val4 << endl;

	int val5 = val3;
	cout << val5 << endl;
	val5 = 999;
	cout << val5 << endl;
	cout << val << " , " << val2 << " , " << val3 << " , " << val4 << endl;


	cout << endl;

	int i = 1, &r1 = i;
	double d = 2, &r2 = d;
	cout << i << " , " << r1 << " , " << d << " , " << r2 << endl;

	//r2 = 3.14;
	//r2 = r1;

	//i = r2;
	r1 = d;
	cout << i << " , " << r1 << " , " << d << " , " << r2 << endl;

	int ia , &ra = ia;
	ia = 5;
	ra = 10;

	cout << ia << " " << ra << endl;

	int ival = 42;
	int &rval =  ival;
	int *p = &ival;
	int *q = p;

	cout << p << " " << ival << endl;
	cout << q << " " << rval << endl;

	return 0;
}