#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    int mathLoser1[10000];
    int mathLoser2[10000];
    int mathLoser3[10000];

    int value1 = 1;
    for (int i = 0; i < 10000; i++)     // 1번 수포자가 찍는 방식
    {
        mathLoser1[i] = value1;
        value1++;
        if (value1 > 5)
            value1 = 1;
    }
    
    int value2 = 1;
    for (int i = 0; i < 10000; i++)     // 2번 수포자가 찍는 방식
    {
        if (i % 2 == 0) // 0,2,4,8...번째 문제는 2번
        {
            mathLoser2[i] = 2;
        }
        else
        {
            if (value2 == 2) // 1, 3, 4, 5 반복
                value2++;

            else if (value2 > 5) // 5이상이면 
                value2 = 1;

            mathLoser2[i] = value2;
            value2++;
        }
    }

    int value3 = 3;                     // 3번 수포자가 찍는 방식
    mathLoser3[0] = 3;
    mathLoser3[1] = 3;
    for (int i = 2; i < 10000; i++)
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
            mathLoser3[i+1] = value3;
            i++;
            value3++;
            if (value3 == 3)
                value3++;
        }
    }

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

	for (int i = 0; i < answers.size(); i++)
	{
		if (*(answers.begin() + i) == mathLoser1[i])
		{
			count1++;
		}
		if (*(answers.begin() + i) == mathLoser2[i])
		{
			count2++;
		}
		if (*(answers.begin() + i) == mathLoser3[i])
		{
			count3++;
		}
	}

    if (count1 >= count2 && count1 >= count3)
    {
        answer.push_back(1);
    }
    if (count2 >= count1 && count2 >= count3)
    {
        answer.push_back(2);
    }
    if (count3 >= count2 && count3 >= count1)
    {
        answer.push_back(3);
    }
    
    return answer;

}