#include <iostream>
#include <string>

using namespace std;

//  int main()
//{
//	    변수   1) 이름 : testnum   2)크기 : 4byte   3)값 : 2.8    4)메모리주소 : ?
//	  
//	    float testnum = 2.8f;
//	    double testnum1 = 2.8f;
//	
//	    ::cout << sizeof(testnum) << endl;
//	    ::cout << &testnum1 << endl;
//	    ::cout << testnum1 << endl;
//	
//	     실습1. 상대방 이름과 내 이름, 상대방 나이를 입력 받아서 생일축하메세지를 출력하는 프로그램을 만들어보자.
//	    /*
//	     예시)
//	         상대방 이름을 입력하세요.
//	         _이재혁
//	
//	         본인의 이름을 입력하세요.
//	         _김진황
//	
//	         상대방나이를 입력하세요.
//	         _24
//	
//	         김진황  : 이재혁님 24살 생일을 축하합니다.
//	    */
//	
//	     실습1. 상대방 이름과 내 이름, 상대방 나이를 입력 받는다/
//	     변수가 필요하다.
//	     데이터타입 변수명;
//	
//	    /*
//	        변수명 이름 규칙
//	        1. c++에서 사용하는 키워드들은 변수명으로 사용할 수 없다.
//	        int float = 3; (x)
//	        
//	        2. 알파벳, 숫자, _로만 구성할 수 있다.
//	        int num = 3; (o)
//	        int costomer_count1 = 100 (o)
//	          예외 1) 숫자로 변수명을 시작할 수 없다.
//	
//	        3. 대/소문자 구분을 한다.
//	
//	        4. 변수명 사이에 띄어쓰기를 넣을 수 없다.
//	
//	        5. 변수명 지을 떄 모부 소문자로 구성한다.
//	
//	        6. 축약어를 쓰지 않는다.
//	
//	        - 헝가리안 표기법
//	        - 카멜표기법
//	        - 파스칼표기법
//	
//	        오늘의 과제
//	        1. 자기 자신을 분석해서
//	        2. 여러가지 타입의 20개 변수로 정의한다.
//	  
//	    */
//	 
//	    string your_name;
//	    cout << "상대방의 이름을 입력하세요" << endl;    
//	    cout << "_";
//	    cin >> your_name;
//	
//	    string my_name;
//	    cout << "본인의 이름을 입력하세요" << endl;
//	    cout << "_";
//	    cin >> my_name;
//	
//	    int your_age;
//	    cout << "상대방 나이를 입력하세요" << endl;
//	    cout << "_";
//	    cin >> your_age;
//	
//	     생일축하메세지를 출력하는 프로그램을 만들어보자.
//	
//	    cout << my_name << " : " << your_name << "님 " << your_age << "살 생일을 축하합니다.";


int main()
{

	/*
	   실습. 
	   고객의 나이를 입력받아서 미성년자(19세이하)이면 true를 성인이면 false를 출력

	   아까 입력받은 나이를 기준으로, 주민등록증 발급대상(20살만)이면 true를 아니면 false를 출력

	   + 아홉수(1의 자리가 9인 수)인지 확인해서 true, false를 출력	
	*/

	int age;
	cout << "고객의 나이를 입력하세요 : ";
	cin >> age;

	/*cout << "미성년자입니다.";
	if (age <= 19)
		cout << "가 맞습니다.";
	else
		cout << "가 아닙니다" << endl;


	cout << "주민등록증 발급대상";
	if (age == 20)
		cout << "이 맞습니다.";
	else
		cout << "이 아닙니다" << endl;

	cout << "아홉수입니다.";
	if ((age % 10) == 9)
		cout << "이 맞습니다.";
	else
		cout << "이 아닙니다" << endl;*/

	cout << boolalpha;

	cout << "미성년자가" << (age <= 19) << "입니다." << endl;
	cout << "주민등록증 발급대상" << (age == 20) << "입니다." << endl;
	cout << "아홉수" << ((age % 10) == 9) << "입니다." << endl;
	
	//int left_value = 14;
	//int right_value = 3;

	//left value ++;   //15
	//cout << left_value++ << endl; // 출력은 15 메모리 16
	//++left_value;    //17
	//cout << ++left_value << endl; // 출력은 18 메모리도 18


	//cout << "left_value = 14, right_value = 3" << endl; 
	//cout << "+ : " << left_value + right_value << endl; //17
	//cout << "- : " << left_value - right_value << endl; //11
	//cout << "* : " << left_value * right_value << endl; //42
	//cout << "/ : " << left_value / right_value << endl; //4
	//cout << "% : " << left_value % right_value << endl; //2

	//left_value += right_value; //left_value + left_value += right_value

	//left_value = 11;
	//right_value = 3;
	//left_value += right_value;
	//cout << left_value << endl;
	//left_value = 11;

	//left_value -= right_value;
	//cout << left_value << endl;
	//left_value = 11;
	//
	//left_value *= right_value;
	//cout << left_value << endl;
	//left_value = 11;

	//left_value /= right_value;
	//cout << left_value << endl;

	//left_value = 11;
	//left_value %= right_value;
	//cout << left_value << endl;
	
}



