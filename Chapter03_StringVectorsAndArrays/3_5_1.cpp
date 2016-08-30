#include <iostream>
using namespace std;

#include <string>

string sa[10];
int ia[10];

int constexpr txt_size()
{
	return 10;
}

int main(int argc, char const *argv[])
{
	
	int arry[10];
	int (*p)[10] = &arry;
	int (&r)[10] = arry;

	for (int i = 0; i < 10; ++i)
	{
		//cout << r[i] << endl;
	}

	unsigned buf_size = 5;
	int iaa[buf_size];
	//int ia1[4*7 - 14];
	int ia2[txt_size()];
	char st[txt_size()] = "hell";
	//char st1[buf_size] = "hell";



	string sa1[10];
	int ia1[10];

	for (int i = 0; i < 10; ++i)
	{
		cout << sa[i] << ",";
	}
	cout << endl;

	for (int i = 0; i < 10; ++i)
	{
		cout << sa1[i] << ",";
	}
	cout << endl;

	for (int i = 0; i < 10; ++i)
	{
		cout << ia[i] << ",";
	}
	cout << endl;

	for (int i = 0; i < 10; ++i)
	{
		cout << ia1[i] << ",";
	}
	cout << endl;


	for (auto c : iaa)
		cout << c << "-";
	cout << endl;

	return 0;
}