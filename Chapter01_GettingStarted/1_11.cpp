#include <iostream>
using namespace std;

/*
 * 编写程序
 * 1.提示用户输入两个整数
 * 2.打印出这两个整数所指定范围内的所有整数
 *
 */
 
int main()
{
	int nFirstNum = 0, nSecNum = 0, nBiggerNum = 0, nSmallerNum = 0;
	cout << "please input two numbers: ";
	cin >> nFirstNum >> nSecNum;
	
	nBiggerNum = (nFirstNum > nSecNum)?nFirstNum:nSecNum;
	nSmallerNum = (nFirstNum < nSecNum)?nFirstNum:nSecNum;
	cout << "Integer between " << nSmallerNum << " and " << nBiggerNum << " is:" << endl;
	nSmallerNum ++;
	if (nSmallerNum == nBiggerNum)
	{
	    cout << "None";
	}
	else
	{
	    /*
	    while (nSmallerNum < nBiggerNum)
	    {
	        cout << nSmallerNum << "\t";
	        nSmallerNum ++;		
	    }
	    */
	    
	    for (; nSmallerNum < nBiggerNum ; nSmallerNum++)
	    {
	        cout << nSmallerNum << "\t";
	    }
	}
	
	cout << endl;
	return 0;
}
