#include <iostream>
using namespace std;

#include <cctype>

#include <string>

int main(int argc, char const *argv[])
{
	// int a = 1;
	// char b = 'a';


	// cout << isalnum(a) << endl;
	// cout << isalpha(b) << endl;
	// cout << tolower(b) << endl;
	// cout << b << endl;




	// range for
	// string str("some string");
	// str = "987654321";
	// for (auto c : str)
	// 	cout << c << endl;

/*
	// 统计s中的标点符号的个数
	string s("Hello World!!!");
	decltype(s.size()) punct_cnt = 0;
	for (auto c : s)
		if (ispunct(c))
			++punct_cnt;
	cout << punct_cnt
		 << " punctuation characters in " << s << endl;
*/

	//for 语句改变字符串中的字符
	// string s("Hello World!!!");
	// int index = 0;
	// for (auto &c : s)
	// {	
	// 	++index;
	// 	c = toupper(c);
	// }
	// cout << s << endl;
	// cout << index << endl;

	// cout << endl;
	// int index2 = 0;
	// for (auto &c : s)
	// {
	// 	++index2;
	// 	c = tolower(c);
	// }
	// cout << s << endl;
	// cout << index2 << endl;


	// // 使用下表进行迭代
	// string s("some string");
	// for (decltype(s.size()) index = 0;
	// 		index != s.size() && !isspace(s[index]);
	// 		++ index)
	// 	s[index] = toupper(s[index]);
	// cout << s << endl;


	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter number in 0 to 15 : " << endl;
	string ret;
	string::size_type n;
	while (cin >> n)
	{
		if (n < hexdigits.size())
		{
			ret += hexdigits[n];
			cout << "your hex number is : " << ret << endl;
		}
		else
		{
			cout << "input number is error" << endl;
		}
	}




	return 0;
}