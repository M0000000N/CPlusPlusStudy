#include <iostream>
#include <string>

using namespace std;

int main()
{
    //변수   1) 이름 : testNum   2)크기 : 4byte   3)값 : 2.8    4)메모리주소 : ?
  
    float testNum = 2.8f;
    double testNum1 = 2.8f;

    ::cout << sizeof(testNum) << endl;
    ::cout << &testNum1 << endl;
    ::cout << testNum1 << endl;

    // 실습1. 상대방 이름과 내 이름, 상대방 나이를 입력 받아서 생일축하메세지를 출력하는 프로그램을 만들어보자.
    /*
     예시)
         상대방 이름을 입력하세요.
         _이재혁

         본인의 이름을 입력하세요.
         _김진황

         상대방나이를 입력하세요.
         _24

         김진황  : 이재혁님 24살 생일을 축하합니다.
    */

    // 실습1. 상대방 이름과 내 이름, 상대방 나이를 입력 받는다/
    // 변수가 필요하다.
    // 데이터타입 변수명;

    /*
        변수명 이름 규칙
        1. C++에서 사용하는 키워드들은 변수명으로 사용할 수 없다.
        int float = 3; (x)
        
        2. 알파벳, 숫자, _로만 구성할 수 있다.
        int num = 3; (o)
        int costomer_count1 = 100 (o)
          예외 1) 숫자로 변수명을 시작할 수 없다.

        3. 대/소문자 구분을 한다.

        4. 변수명 사이에 띄어쓰기를 넣을 수 없다.

        5. 변수명 지을 떄 모부 소문자로 구성한다.

        6. 축약어를 쓰지 않는다.

        - 헝가리안 표기법
        - 카멜표기법
        - 파스칼표기법

        오늘의 과제
        1. 자기 자신을 분석해서
        2. 여러가지 타입의 20개 변수로 정의한다.
         
         ex)         
         이름 : 문수진
         나이: 25
         키: 158.5
         혈액형 : o
         MBTI : ENTP
         별자리 : 전갈자리
         탄생석 : 

    */
 
    string your_name;
    cout << "상대방의 이름을 입력하세요" << endl;    
    cout << "_";
    cin >> your_name;

    string my_name;
    cout << "본인의 이름을 입력하세요" << endl;
    cout << "_";
    cin >> my_name;

    int your_age;
    cout << "상대방 나이를 입력하세요" << endl;
    cout << "_";
    cin >> your_age;

    // 생일축하메세지를 출력하는 프로그램을 만들어보자.

    cout << my_name << " : " << your_name << "님 " << your_age << "살 생일을 축하합니다.";

}