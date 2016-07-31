#include <iostream>
#include <string>
using namespace std;

string global_str;
int global_int;

int main()
{
	unsigned u = 10, u2 = 42;
	cout << "u = " << u << " , " << "u2 = " << u2 << endl;
	cout << "u2 - u = " << u2 - u << endl;
	cout << "u - u2 = " << u -u2 << endl;

	int i = 10, i2 = 42;
	cout << "i = " << i << " , " << "i2 = " << i2 << endl;
	cout << "\v";

	cout << " ________________\n";
	cout << "|i2 - i = " << i2 -i << "|"<< endl;
	cout << "\tHI!\n";
	cout << "i - i2 = " << i - i2 << endl;
	cout << "i - u = " << i -u << endl;
	cout << "u - i = " << u - i << endl;
	cout << "u - 11 = " << u - 11 << endl;
	cout << "u - 12 = " << u - 12 << endl;
	cout << "u - 9 = " << u - 9 << endl;
	cout << "u - 10 = " << u - 10 <<endl;

	cout << "a really, really long string literal "
			" that spans two lines" << endl;

	cout << "who goes with F\145rgus ?\012--" << endl;
	cout << 3.14e1L << endl << "1024f "<< endl << 3.14L << endl;

	cout << "2\115\n" << endl;
	cout << "2\t\x4d" << endl; 

	//long double ld = 3.1415926536;
	int ld = 3;
	//int a{ld}, b = {ld};
	int c(ld), d = ld;
	int e, f, g;
	cout << e << " , " << f << " , "<< g << endl;

	int local_int;
	string locat_str;

	cout << global_int << " , " << global_str << endl;
	cout << local_int << " , " << locat_str << endl;
	return 0;
}
