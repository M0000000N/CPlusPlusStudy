#include <iostream>
using namespace std;

int main()
{

    //int mathLoser1[10000];
    //int mathLoser2[10000];
    //int mathLoser3[10000];

    //int value1 = 1;
    //for (int i = 0; i < 10000; i++)     // 1번 수포자가 찍는 방식
    //{
    //    mathLoser1[i] = value1;
    //    value1++;
    //    if (value1 > 5)
    //        value1 = 1;
    //}
    //for (int i = 0; i < 50; i++)
    //{
    //	cout << i << "번째는 : " << mathLoser1[i] << endl;
    //}

	//int mathLoser2[10000];
 //   int value2 = 1;
 //   for (int i = 0; i < 10000; i++)     // 2번 수포자가 찍는 방식
 //   {
 //       if (i % 2 == 0) // 0,2,4,8...번째 문제는 2번
 //       {
 //           mathLoser2[i] = 2;
 //       }
 //       else
 //       {
 //           if (value2 == 2) // 1, 3, 4, 5 반복
 //               value2++;

 //           else if (value2 > 5) // 5이상이면 
 //               value2 = 1;

 //           mathLoser2[i] = value2;
 //           value2++;
 //       }
 //   }
 //   for (int i = 0; i < 50; i++)
 //   {
 //   cout << i << "번째는 : " << mathLoser2[i] << endl;
 //   }

    int mathLoser3[10000];
    int value3 = 3;                     // 3번 수포자가 찍는 방식
    mathLoser3[0] = 3;
    mathLoser3[1] = 3;
    for (int i = 0; i < 10000; i++)
    {
        if (i % 10 == 0)
        {
            mathLoser3[i] = 3;
            mathLoser3[i + 1] = 3;
            i++;
        }
        else
        {
            if (value3 == 3)
                value3 = 1;
            if (value3 > 5)
                value3 = 1;
            mathLoser3[i] = value3;
            i++;
            mathLoser3[i] = value3;
            value3++;
            if (value3 == 3)
                value3++;
        }
    }

	for (int i = 0; i < 10001; i++)
	{
		cout << i + 1 << "번째는 : " << mathLoser3[i] << endl;
	}
}