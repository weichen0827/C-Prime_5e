#include <iostream>
using namespace std;

#include <vector>
#include <string>
#include <cctype>

int main(int argc, char const *argv[])
{
	// vector<unsigned> scores(11, 0);
	// unsigned grade;
	// while (cin >> grade) {
	// 	if (grade <= 100)
	// 		++scores[grade/10];
	// }

	// vector<int> ivec;
	// for (decltype(ivec.size()) ix = 0; ix != 10; ++ix)
	// {
	// 	ivec.push_back(ix);
	// }

	// // 使用范围for语句访问基础元素
	// for (auto c : ivec)
	// 	cout << c << endl;

	// // 3.17
	// vector<string> strVec;
	// string str;

	// int index = 0;
	// while (cin >> str)
	// {
		
	// 	strVec.push_back(str);

	// 	if (index >= 2)
	// 		break;
	// 	++index;
	// }

	// for (auto &c : strVec)
	// {
	// 	// 只能是char可以转换大写，string不能
	// 	for (auto &s : c)
	// 		s = toupper(s);
	// }

	// cout << endl;

	// for (auto c : strVec)
	// 	cout << c << endl;


	// // 3.18
	// vector<int> vec1(10, 42);
	// vector<int> vec2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	// vector<int> vec3 = vec1;
	// vector<int> vec4{10, 42};
	// vector<string> vec5(10, "hi");
	// vector<string> vec6{10, "ha"};

	// for (auto c : vec6)
	// 	cout << c << endl;


	// 3.19
	vector<int> vec;
	int ia;

	int index = 0;
	while (cin >> ia)
	{
		vec.push_back(ia);
		++index;
		if(index >= 5)
			break;
	}

	cout << "vec size is " << vec.size() << endl;

	for (int i = 0; i < vec.size(); ++i)
	{
		// cout << vec[i] << "+"
		// 	 << vec[i+1] << "="
		// 	 << vec[i]+vec[i+1] << endl;
		// ++i;

		cout << vec[i] << "+"
			 << vec[vec.size()-1-i] << "="
			 << vec[i]+vec[vec.size()-1-i] << endl;

		if (i >= vec.size()/2 - 1)
		 	break;
	}

	if (0 != vec.size()%2)
		cout << "the left number is " << vec[vec.size()/2] << endl;

	cout << "iterator" << endl;



	return 0;
}