#include <iostream>
using namespace std;
// using std::cin;
// using std::cout;
// using std::endl;

#include <string>

int main(int argc, char *argv[])
{
	// std::string str(3, 'd'), str1 = "  hello world  ";
	// int a, b;
	// //cin >> a >> b;
	// cout << a << b << " " << str << "," << str1 << endl;


	// 读取未知数量的string对象
	// string word;
	// int index = 0;
	// while (cin >> word)
	// {
	// 	++index;
	// 	cout << word << endl
	// 		 << index << endl;
	// }

	// 读取一整行
	//string line;
	// int index{0};
	// while (getline(cin, line))
	// {
		
	// 	if (line.empty())
	// 	{
	// 		++index;
	// 		cout << "the line is empty, nothing can output!" << endl;
	// 	}
	// 	else
	// 	{
	// 		cout << line << endl;
	// 		cout << "the line size is " << line.size() << endl;
	// 	}

	// 	if (index > 3)
	// 		break;
	// }
	
	// auto len = line.size();
	// decltype(line.size()) len2;
	// cout << len << ", " << len2 << endl;
	// len = -2;
	// cout << len << endl;



	// int n = -2;
	// string str("mylinux");
	// cout << str.size() << endl;

	// if (str.size() < n)
	// 	cout << "true" << endl;



	// string str = "Hello";
	// string phrase = "Hello World";
	// string slang = "Hiya";

	// if (str < phrase)
	// 	cout << "str < phrase" << endl;

	// if (slang > str)
	// 	cout << "str < slang" << endl; 


// 3.2
    // string line;
    // while(getline(cin, line))
    //     cout << line << endl;

    // string word;
    // while (cin >> word)
    //     cout << word << endl;


/*
    //3.3
    string str1, str2;
    //cout << "please input two string:" << endl;

    if (argc <= 2)
    {
        cout << "the input is less two string." << endl;
        return -1;
    }

    str1 = argv[1];
    str2 = argv[2];
    //cin >> str1 >> str2;

    // input string
    cout << endl << "input : ";
    for (int i = 1; i < argc; i++)
    {
        cout << argv[i] << " / ";
    }
    cout << endl << endl;

    if (str1.empty() || str2.empty())
    {
        cout << "string is empty!" << endl;
        return -1;
    }

    if(str1 == str2)
    {
        cout << "str1 and str2 are the same." << endl;
    }
    else
    {
        cout << "the bigger string : ";
        if (str1 > str2)
        {
            cout << str1 << endl;
        }
        else
        {
            cout << str2 << endl;
        }


        if (str1.size() == str2.size())
        {
            cout << "the longer string are the same." << endl;
        }
        else
        {
            cout << "the longer string : "
                 << (str1.size() > str2.size() ? str1 : str2)
                 << endl;
        }

    }
*/

    // 3.5
    string str1, str2, str3, str4;
    cin >> str1 >> str2 >> str3;
    str4 = str1 + str2 + str3;
    cout << str4 << endl;



	return 0;
}
