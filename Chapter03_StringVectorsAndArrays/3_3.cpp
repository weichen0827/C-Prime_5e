#include <iostream>
using namespace std;

#include <vector>

int main(int argc, char const *argv[])
{
	//vector<vector<int> > v;

	vector<int> ivec;
	vector<int> ivec2(ivec);
	vector<int> ivec3 = ivec;
	//vector<string> svec(ivec);

	vector<string> articles = {"a", "an", "the"};

	vector<int> ivec4(10, -1);
	vector<string> svec2(10, "hi!");

	return 0;
}