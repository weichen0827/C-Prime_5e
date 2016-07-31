#include <iostream>
using namespace std;

/*
 * scope
 *
 */

int resued = 42;

int i = 100, sum = 0;
int main(int argc, char const *argv[])
{
	// int _ = 0;

	// cout << resued << " , " << _ << endl;

	// int resued = 1;

	// cout << resued << " , " << _ << endl;
	// cout << ::resued <<  " , " << _ << endl;

	
	for (int i = 0; i != 10; ++i)
		sum += i;
	cout << i << " , " << sum << endl;
	return 0;
}