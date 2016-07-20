#include <iostream>
using namespace std;

/*
 *
 * 1.read input all number
 * 2.calc the sum
 *
 */

int main()
{
	int sum = 0, value = 0;
	
	//until ctrl+D -> "end-of-file"
	while (cin >> value)
	{
		sum += value;
	}
	cout << "Sum is : " << sum << endl;

	return 0;
}
