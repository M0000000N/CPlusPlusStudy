#include <iostream>

using namespace std;

int main()
{    
  

     /*
       4_3. 구구단 2단 ~ 9단을 다음과 같은 형태로 출력해보자
       2단  3단  4단
       5단  6단  7단
       8단  9단
    
    */

    for (int right = 1; right < 10; right++)
    {
        for (int left = 2; left < 10; left++)
        {
            if (left <= 3)
            {
                cout << left << " * " << right << " = " << left * right << "    ";
                cout << endl;
                cout << endl;
            }

            else if (left <= 6)
            {
                cout << left << " * " << right << " = " << left + 3 * right << "    ";
                cout << endl;
                cout << endl;
            }
            else
            {
                cout << left << " * " << right << " = " << left + 3 * right << "    ";
                cout << endl;
                cout << endl;
            }
        }
        cout << endl;
    }


    /*for (int right = 1; right < 10; right++)
    {
        for (int left = 5; left < 8; left++)
        {
            cout << left << " * " << right << " = " << left * right << "    ";
        }
        cout << endl;        
    }

    cout << endl;
    cout << endl;

    for (int right = 1; right < 10; right++)
    {
        for (int left = 8; left < 10; left++)
        {
            cout << left << " * " << right << " = " << left * right << "    ";
        }
        cout << endl;
    }*/




}


