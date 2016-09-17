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

	int a[10] = { 1, 3, -5, 6, 11 };
    double b[ARRAY_SIZE(a)] = {}; // 编译成功
    std::cout << ARRAY_SIZE(b) << std::endl; // 15

    int *p = &a[0];	// int *p = a;
    cout << *p << endl;
    cout << *(p+1) << endl;

    cout << endl;
    int *q = a;
    cout << *q << endl;

    // 遍历数组
    // 范围for
    for (auto c : a)
    {
    	cout << c << " ";
    }
    cout << endl;
    // 迭代器
    int *e = &a[10];
    for (int *b = a; b != e; ++b)
    	cout << *b << " ";
    cout << endl;
    //
    for (int i = 0; i < 10; ++i)
    {
    	cout << a[i] << " ";
    }
    cout << endl;

    //
    int *pBeg = begin(a), *pEnd = end(a);
    while (pBeg != pEnd && *pBeg >= 0)
    {
    	++pBeg;
    }
    cout << *pBeg << endl;
    cout << endl;

    constexpr size_t sz = 5;
    int arr[sz] = {5, 4, 3, 2, 1};
    int aaa[2][3];
    cout << sizeof(aaa[0]) << " " << sizeof(aaa[0][0]) << endl;
    cout << sizeof(arr)/sizeof(arr[0]) << endl;
    int *ip = arr;	// int *ip = &arr[0];
    int *ip1 = ip + 5;
    cout << *ip1 << endl;

    cout << end(arr) - begin(arr) << endl;

    int *x = arr, *y = arr + sz;
    while (x < y)
    {
    	cout << *x << endl;
    	++x;
    }

    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;
    cout << &arr[5] << endl;
    cout << &arr[60] << endl;
    arr[6] = 9;
    cout << arr[6] << endl;

	return 0;
}