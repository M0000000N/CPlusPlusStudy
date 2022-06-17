#include <string>
#include <vector>
#include <iostream>
#include <assert.h>

using namespace std;

#pragma region selfnumber
//int main()
//{
//    int n ;
//    int count=0;
//    bool isSelfNumber[100000];
//    int selfNumber[100000];
//
// //   while (n != 0)
// //   {
// //       n /= 10;
// //       count++;
// //   }
// //   cout << n << endl;
// //   cout << count << endl;
//
//	////	// n이 1의 자리수일 떄 셀프넘버
// //   while (count = 1)
// //   {
//
// //   }
//		for (int n = 1; n <= 10000; n++)
//		{
//            //int n = 1;
//			isSelfNumber[n] = true;
//			isSelfNumber[n + n / 10 + n % 10] = false;
//            //n++;
//		}
//
//        for (int i = 1; i <= 10000; i++)
//        {
//            int n = 1;
//			if (isSelfNumber[n])
//			{
//                cout << n;
//			}
//            n++;
//        }
//
//    // n이 1000의 자리수일 때 셀프넘버
//    //n % 10;
//
//    // n이 100의 자리수일 떄 셀프넘버
//
//    // n이 10의 자리수일 때 셀프넘버
//	//if (n % 10 == n * 1)
//	//	if (n % 10 == n)
//
//
//    return 0;
//}
#pragma endregion

#pragma region 손익분기점

int main()
{
	int A;
	int B;
	int C;
	cin >> A >> B >> C;
	int count = 0;
	int income = C * count;
	int cost = A + B * count;

	while (income <= cost)
	{
		income = C * count;
		cost = A + B * count;
		count++;
	}
	if (count == 0)
	{
		cout << "-1";
	}
	else
	cout << income;
}

#pragma endregion
