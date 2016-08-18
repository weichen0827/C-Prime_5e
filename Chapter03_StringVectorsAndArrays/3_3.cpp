#include <iostream>
using namespace std;

#include <vector>

int main(int argc, char const *argv[])
{
	//vector<vector<int> > v;

	// vector<int> ivec;
	// vector<int> ivec2(ivec);
	// vector<int> ivec3 = ivec;
	// //vector<string> svec(ivec);

	// vector<string> articles = {"a", "an", "the"};

	// vector<int> ivec4(10, -1);
	// vector<string> svec2(10, "hi!");

	//3.12
	vector<vector<int>> ivec;
	vector<string> svec(10, "null");
	vector<string> svec2 = svec;

	std::vector<int> v;
	cout << v.empty() << endl;
	for (int i = 0; i != 100; ++i)
	{
		v.push_back(i);
	}
	std::vector<int> v2;
	v2 = v;

	cout << v2.size() << endl;
	cout << v2[0] << endl;

	int index = 0;
	for (int i = 0; i < 100; ++i)
	{
		if (0 == index%10)
			cout << endl;
		cout << v2[i] << " | ";

		++index;
	}
	cout << endl;

	for (auto &i : v2)
		i *= i;

	index = 0;
	for (auto i : v2)
	{
		if (0 == index%10)
			cout << endl;
		cout << i << " | ";
		++index;
	}
	cout << endl;

	cout << endl;

	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			if (0 != j%i)
			{
				cout << j << "*" << i << "=" << i*j << "|";
			}
			else
			{
				cout << j << "*" << i << "=" << i*j << endl;
			}
		}
		
	}

	// std::vector<string> v1;
	// string word;
	// while (cin >> word)
	// 	v1.push_back(word);

	return 0;
}