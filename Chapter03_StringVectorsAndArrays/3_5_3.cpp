#include <iostream>
using namespace std;

#include <string>

template<typename T, size_t N>
char(&ArraySizeHelper(const T(&array)[N]))[N];
#define ARRAY_SIZE(array) (sizeof(ArraySizeHelper(array)))

int main(int argc, char const *argv[])
{
	string nums[3][2] = {"one", "two", "three", "4", "5", "6"};
	cout << sizeof(nums)/sizeof(**nums) << endl;
	cout << sizeof(nums)/sizeof(nums[0][0]) << endl;

	for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); ++i)
	{
		cout << i << " ";
	}
	cout << endl;
	for (int j = 0; j < sizeof(nums[0])/sizeof(nums[0][0]); ++j)
		{
			cout << j << " ";
		}
	cout << endl;

	int a[15] = { 1, 3, 5, 6, 11 };
    double b[ARRAY_SIZE(a)] = {}; // 编译成功
    std::cout << ARRAY_SIZE(b) << std::endl; // 15

    int *p = &a[0];	// int *p = a;
    cout << *p << endl;
    cout << *(p+1) << endl;

    int *q = a;
	return 0;
}