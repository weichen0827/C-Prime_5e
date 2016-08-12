#include <iostream>
using namespace std;

int foo();

int main(int argc, char const *argv[])
{
	// double x = 1.1;
	// decltype(foo()) sum = x;
	// double s = 2;

	// cout << x << ", " << sum << ", " << s << endl;

	// int i = 42, *p = &i, &r = i;
	// decltype(r + 0) b;
	// decltype(*p) c = i;
	// decltype(p) d = &i;
	// int *f;
	// decltype(p) g = &i;
	// cout << c << ", " << d << ", " << f << ", " << g << endl;
	// //decltype(r) rr;

	// decltype ((i+0)) h;


	int a = 3, b = 4;
	// decltype (a)c = a;
	// decltype((b)) d = a;
	// ++c;
	// ++d;

	decltype(a) c = a;
	decltype(a = a+b) d = a;

	cout << a << " "
			<< b << " "
			<< c << " "
			<< d << " "
			<< endl;

	



	return 0;
}

int foo()
{
	return 3;
}