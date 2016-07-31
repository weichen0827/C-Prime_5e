#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int i = 42;
	int *p;
	int *&r = p;

	r = &i;
	cout << *r << endl;
	*r = 0;
	cout << i <<endl;
	return 0;
}