#include <iostream>
using namespace std;

#include <vector>
#include <string>
//#include <cctype>

int main(int argc, char const *argv[])
{
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
	return 0;
}