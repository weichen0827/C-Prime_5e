#include <iostream>
#include "Sales_date.h"
//#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	double prince;
	Sales_data s1;
	cin >> s1.bookNo >> s1.units_sold >> prince;
	s1.revenue = s1.units_sold*prince;

	cout << s1.bookNo << " "
		 << s1.units_sold << " "
		 << s1.revenue << " "
		 << endl;

	int *p = nullptr;

	return 0;
}