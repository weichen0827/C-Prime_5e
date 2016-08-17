#include <iostream>
using namespace std;

#include <string>
#include <cctype>

int main(int argc, char const *argv[])
{

	// 3.6-3.8将字符串中所有字符替换成X
	string str1("hello world!!");

	// 1
	// for (char &c : str1)	// for (auto &c : str1)
	// 	c = 'X';

	// 2
	int index = 0;
	while (index <= str1.size())
	{
		str1[index] = 'X';
		++index;
	}

	cout << str1 << endl;


	// 3.9
	string s;
	bool ret = s.empty();
	cout << s[1] << ret << endl;

	// 3.10
	string str2;
	string str3("");
	cin >> str2;
	for (auto &c : str2)
		if (!ispunct(c))
			str3 += c;
	cout << str3 << endl;

	// 3.11
	const string s1 = "Keep out!";
	for (auto &c : s1)
	{
		cout << c << endl;
		// c = 'x';
		// cout << c << endl;
	}

	return 0;
}