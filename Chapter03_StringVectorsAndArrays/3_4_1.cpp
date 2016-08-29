#include <iostream>
using namespace std;

#include <vector>
#include <string>
//#include <cctype>



int main(int argc, char const *argv[])
{
	/*
	string s("some string");
	// if(s.begin() != s.end())
	// {
	// 	auto it = s.begin();
	// 	*it = toupper(*it);
	// 	cout << s << endl;
	// }


	// auto it = s.begin();
	// while(it != s.end() && !isspace(*it))
	// {
	// 	*it = toupper(*it);
	// 	++it;
	// 	cout << *it << endl;
	// }
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
	{
		*it = toupper(*it);
	}

	cout << s << endl;

	for (auto ia = s.begin(); ia != s.end() && !isspace(*ia); ++ia)
		*ia = tolower(*ia);

	vector<int> ivec(5,2);
	vector<int>::iterator ii = ivec.begin();
	cout << (*ii = (*ii = 4)) << ivec[0] << endl;

	cout << s << endl;



	vector<string> text{"who are you?", "where", "", "111"};
	bool isFirst = true;
	for (auto it = text.begin();
			it != text.end() && !it->empty();
			++it)
	{	
		if (isFirst)
		{
			for (auto &c : *it)
			{
				c = toupper(c);
			}
			
			isFirst = false;
		}
			
			cout << *it << endl;
	}


	// 3.21
	vector<string> v1{10, "hi"};

	for (vector<string>::iterator i = v1.begin(); i != v1.end(); ++i)
		cout << *i << endl;

	cout << endl;

	for (auto c : v1)
		cout << c << endl;

	*/

	// 3.23
	#define SYMBOL int
	
	vector<SYMBOL> avec;
	SYMBOL i;
	while (cin >> i)
		avec.push_back(i);

	cout << endl;
	for (auto c : avec)
	cout << c << "\t";


	for (vector<SYMBOL>::iterator i = avec.begin(); i != avec.end(); ++i)
	{
		*i = 2**i;	// (*i)*2
	}
	cout << endl;

	for (auto c : avec)
	cout << c << "\t";
	
	cout << endl;

	return 0;
}