#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	const auto f = ci;
	auto &g = ci;
	//auto &h = 42;
	const auto &j = 42;

	auto k = ci, &l = i;
	//auto &n = i, *p2 = &ci;

	a = 42;
	b = 42;
	c = 42;
	//d = 42; // invalid conversion from 'int' to 'int*'
	//e = 42;	// invalid conversion from 'int' to 'int*'
	//g = 42;		// assignment of read-only reference 'g'

	return 0;
}