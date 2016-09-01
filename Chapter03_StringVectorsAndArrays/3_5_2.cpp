#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>
#include <iomanip>

#include <vector>

double random(double start, double end)
{
	return start+(end-start)*rand()/(RAND_MAX+1.0);
}

int main(int argc, char const *argv[])
{
	double random(double, double);
	srand(unsigned(time(0)));

	constexpr unsigned count = 10;
	unsigned scores[count]={0};
	unsigned grade;
	for (int i = 0; i < count; ++i)
	{
		++scores[(unsigned)(random(0, count-1))];
		//if (grade <= 100)
		//	++scores[grade/10];
	}

	for (auto i : scores)
		cout << i << " ";
	cout << endl;

/*

///////////////////////////////
	double random(double, double);
	int a[10] = {0};
	constexpr int Gen_max = 10000000;
	srand(unsigned(time(0)));
	for (int i = 0; i < Gen_max; ++i)
	{
		switch(int(random(0, 10)))
		{
			case 0:a[0]++;break;
			case 1:a[1]++;break;
			case 2:a[2]++;break;
			case 3:a[3]++;break;
			case 4:a[4]++;break;
			case 5:a[5]++;break;
			case 6:a[6]++;break;
			case 7:a[7]++;break;
			case 8:a[8]++;break;
			case 9:a[9]++;break;
			default:cerr << "ERROR!" << endl;exit(-1);
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << i << ":"
			 << setw(6)				// 6位制表位，从右开始
			 << setiosflags(ios::fixed)	// 保留小数
			 << setprecision(2)		// 保留2位小数
			 << double(a[i])/Gen_max*100
			 << "%"
			 << "  ==> "
			 << setw(8)
			 << a[i]<< endl;
	}

	//for (auto i : a)		



	// 3.31
	int arr1[10]={0};
	for (int i = 0; i < 10; ++i)
	{
		arr1[i] = i;
	}

	for (auto a : arr1)
		cout << a << endl;

	//vector<int> ivec;
	vector<int> ivec(10);
	//for (decltype(ivec.size()) i = 0; i < 10; ++i)
	for (int i = 0; i < 10; ++i)
	{
		//ivec.push_back(i);
		ivec[i] = arr1[i] * 2;
	}

	//for (decltype(ivec.size()) a : ivec)
	for (auto a : ivec)
		cout << a << endl;
*/
	return 0;
}