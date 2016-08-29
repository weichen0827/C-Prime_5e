#include <iostream>
using namespace std;

#include <vector>

int main(int argc, char const *argv[])
{
	
	int count;
	cin >> count;
	vector<int> ivec;

	for (int i = 0; i < count; ++i)
	{
		ivec.push_back(i);
	}

	for (auto c : ivec)
		cout << c << ",";

	cout << endl << "input you want number: ";

	int cc;
	cin >> cc;

	auto beg = ivec.begin(), end = ivec.end();
	auto mid = ivec.begin() + (end - beg)/2;
	//auto mid = (beg + end)/2;
	cout << "beg=" << *beg
		 << ", mid=" << *mid 
		 << ", end=" << *end << endl;
	int index = 0;
	while (mid != end && *mid != cc)
	{
		if (cc < *mid)
			end = mid;
		else
			beg = mid + 1;

		mid = beg + (end - beg)/2;
		++index;
		cout << "beg=" << *beg
		 	 << ", mid=" << *mid 
		 	 << ", end=" << *end << endl;
	}

	cout << index << ", " << *mid-*beg+1 << endl;

	

/*
	// 3.25

	vector<unsigned> scores(11, 0);
	unsigned grade;
	// while (cin >> grade) {
	// 	if (grade <= 100)
	// 		++scores[grade/10];
	// }

	vector<unsigned>::iterator it;
	while (cin >> grade)
	{
		if (grade <= 100)
		{
			it = scores.begin() + grade/10;
			++*it;
		}
	}	
	

	cout << endl;
	int index = 0;
	for (auto c : scores)
	{
		if (10 == index)
		{
			cout << index*10 << ": " << c << "[ge]" << endl;
		}
		else
		{
			cout << index*10 << "~" << index*10 + 9 << ": " << c << "[ge]" << endl;

		}
		++index;
	}
	cout << endl;
*/
	return 0;
}