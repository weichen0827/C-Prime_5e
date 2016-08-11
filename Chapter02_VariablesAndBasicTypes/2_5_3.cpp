#include <iostream>
using namespace std;

int foo();

int main(int argc, char const *argv[])
{
	double x = 1.1;
	decltype(foo()) sum = x;
	double s = 2;

	cout << x << ", " << sum << ", " << s << endl;

	return 0;
}

int foo()
{
	return 3;
}