#include <iostream>
using namespace std;
// using std::cin;
// using std::cout;
// using std::endl;

#include <string>

int main(int argc, char *argv[])
{
	// std::string str(3, 'd'), str1 = "  hello world  ";
	// int a, b;
	// //cin >> a >> b;
	// cout << a << b << " " << str << "," << str1 << endl;


	// 读取未知数量的string对象
	// string word;
	// int index = 0;
	// while (cin >> word)
	// {
	// 	++index;
	// 	cout << word << endl
	// 		 << index << endl;
	// }

	// 读取一整行
	//string line;
	// int index{0};
	// while (getline(cin, line))
	// {
		
	// 	if (line.empty())
	// 	{
	// 		++index;
	// 		cout << "the line is empty, nothing can output!" << endl;
	// 	}
	// 	else
	// 	{
	// 		cout << line << endl;
	// 		cout << "the line size is " << line.size() << endl;
	// 	}

	// 	if (index > 3)
	// 		break;
	// }
	
	// auto len = line.size();
	// decltype(line.size()) len2;
	// cout << len << ", " << len2 << endl;
	// len = -2;
	// cout << len << endl;



	// int n = -2;
	// string str("mylinux");
	// cout << str.size() << endl;

	// if (str.size() < n)
	// 	cout << "true" << endl;



	string str = "Hello";
	string phrase = "Hello World";
	string slang = "Hiya";

	if (str < phrase)
		cout << "str < phrase" << endl;

	if (slang > str)
		cout << "str < slang" << endl; 




	return 0;
}
