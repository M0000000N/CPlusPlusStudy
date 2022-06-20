#include <string>
#include <vector>
#include <iostream>
#include <assert.h>

using namespace std;

<<<<<<< Updated upstream
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
=======
vector<int> solution(vector<int> answers)
{
    // 수포자가 찍는 방식을 담은 배열
    int* mathLoser1 = (int*)malloc((sizeof(int)) * answers.size());
    int* mathLoser2 = (int*)malloc((sizeof(int)) * answers.size());
    int* mathLoser3 = (int*)malloc((sizeof(int)) * answers.size());

    // 1번 수포자가 찍는 방식 : 1,2,3,4,5,1,2,3,4,5,...
    int value1 = 1;
    for (int i = 0; i < answers.size(); i++)
    {
        mathLoser1[i] = value1; // 12345순으로 배열에 담는다.
        value1++;
        if (value1 > 5)         // 값이 5이상이면 값은 1
            value1 = 1;
    }

    // 2번 수포자가 찍는 방식 : 2,1,2,3,2,4,2,5,2,1,2,3,2,4,2,5,...
    int value2 = 1;
    for (int i = 0; i < answers.size(); i++)
    {
        if (i % 2 == 0) // 0,2,4,8...번째는 2번을 찍는다.
        {
            mathLoser2[i] = 2;
        }
        else                        // 1, 3, 4, 5 반복
        {
            if (value2 == 2)        // 값이 2면 값은 3
                value2++;

            else if (value2 > 5)    // 값이 5이상이면 값은 1
                value2 = 1;

            mathLoser2[i] = value2; // 위 알고리즘을 거친 값을 현재 배열에 담는다.
            value2++;               // 값은 1씩 증가
        }
    }

    // 3번 수포자가 찍는 방식 3,3,1,1,2,2,4,4,5,5,3,3,1,1,2,2,4,4,5,5, ...
    int value3 = 3;
    for (int i = 0; i < answers.size(); i++)
    {
        if (i % 10 == 0)            // 10번째 마다 현재 값과 다음 값은 3,3
        {
            mathLoser3[i] = 3;
            mathLoser3[i + 1] = 3;
            i++;
        }
        else
        {
            if (value3 == 3)        // 값이 3이면 값은 1
                value3 = 1;
            if (value3 > 5)         // 값이 5 이상이면 값은 1
                value3 = 1;
            mathLoser3[i] = value3; // 위 알고리즘을 거친 값을 현재와 다음 배열에 넣는다.
            mathLoser3[i + 1] = value3;
            i++;                    // 다음 순서
            value3++;               // 값도 증가
            if (value3 == 3)        // 증가된 값이 3이면 값은 4 
                value3++;
        }
    }

    // 수포자들이 맞힌 개수
    int correctCount1 = 0;
    int correctCount2 = 0;
    int correctCount3 = 0;

    // 0부터 입력된 정답크기만큼 순회해서 수포자의 정답개수를 추가한다.
    for (int i = 0; i < answers.size(); i++)
    {
        if (*(answers.begin() + i) == mathLoser1[i])
        {
            correctCount1++;
        }
        if (*(answers.begin() + i) == mathLoser2[i])
        {
            correctCount2++;
        }
        if (*(answers.begin() + i) == mathLoser3[i])
        {
            correctCount3++;
        }
    }

    vector<int> answer; // 많은 문제를 맞힌 사람을 담는 객체
    // 가장 높은 점수를 받은 사람 return
    if (correctCount1 >= correctCount2 && correctCount1 >= correctCount3)   // 1번 수포자가 많이 맞췄을 때
    {
        answer.push_back(1);
    }
    if (correctCount2 >= correctCount1 && correctCount2 >= correctCount3)   // 2번 수포자가 많이 맞췄을 때
    {
        answer.push_back(2);
    }
    if (correctCount3 >= correctCount2 && correctCount3 >= correctCount1)   // 3번 수포자가 많이 맞췄을 때
    {
        answer.push_back(3);
    }

    return answer;
}
>>>>>>> Stashed changes
