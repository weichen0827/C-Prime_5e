#include <iostream>
using namespace std;

/*
 * 统计在输入中每个值连续出现的次数
 *
 */


int main()
{
   int currVal = 0, val = 0;
   if (cin >> currVal) {
        int cnt = 1;
        while (cin >> val) {
            if (val == currVal) {
                cnt ++;
            } else {
                cout << currVal
                     << " occurs "
                     << cnt
                     << " times "
                     << endl;
                currVal = val;
                cnt = 1;
            }
                    
        }
        cout << currVal
             << " occurs "
             << cnt
             << " times "
             << endl; 
        
   }
    return 0;
}
