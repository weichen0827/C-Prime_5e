#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// const int ci = 42;
	// const int &r1 = ci;
	// //int &r2 = ci;
	// const int r2 = 1024;

	// const int &r3 = 1;


	double dval = 3.56;

	const int &r = 4.444;

	cout << r << endl;

	double val = 3.14;
	const double *p = &val;

	int errNumb = 0;
	int *const curErr = &errNumb;

	const double pi = 3.14159;
	const double *const pip = &pi;

	*curErr = 1;
	//*pip = 4.4;	//assignment of read-only location ‘*(const double*)pip’   
	int test = 44;
	//curErr = &test;	//assignment of read-only variable ‘curErr’

	return 0;
}