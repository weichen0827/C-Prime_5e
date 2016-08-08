#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// int i = -1, &r = i;

	// const int a = -1, &b = 0;

	// int i2 = 0;
	// const int *p1 = &i2; 

	// const int i3 = i, &c = i;

	// int *const p2 = &i2;

	// const int *const p3 = &i2;

	//const int &const r2 = a; // ‘const’ qualifiers cannot be applied to ‘const int&’
	int a = 1;
	//int &const r2 = a;

	int i, *const cp = &i;

	int *p1, *const p2 = p1;

	const int ic = 0, &r = ic;

	const int *const p3 = &i;

	const int *p;

	i = ic;
	//p1 = p3; 	//invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
	//p1 = &ic;	//invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
	//p3 = &ic;	//assignment of read-only variable ‘p3
	//p2 = p1;	//assignment of read-only variable ‘ic’
	p1 = p2;
	//ic = *p3;	//assignment of read-only variable ‘ic’


	int ci = 1;
	const int & aa = ci;
	//aa = 3;	//assignment of read-only reference ‘aa’

	int null = 0, *p11 = &null;

	return 0;
}