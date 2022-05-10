#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

#pragma region
//int factorial(int n)// 반복할 내용과 관련된 변수는...??
//{
//	if (n <= 1) //기저조건 F(1) = 1
//	{
//		return 1;
//	}
//	// 재귀조건 F(N) = N * F(N - 1)
//	return n * factorial(n - 1);
//}
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	printf("%d", factorial(N));
//
//	//int result = 1;
//
//	//for (int i = N; i >= 2; --i)
//	//{
//	//	result *= i;
//	//}
//
//	//printf("%d", result);
//}
#pragma endregion 백준 10872 : 팩토리얼

#pragma region
//int fibonacci(int n)// 반복할 내용과 관련된 변수는...??
//{
//	if (n <= 1) //기저조건 Fn = Fn-1 + Fn-2 (n ≥ 2)
//	{
//		return n;
//	}
//	// 재귀조건 Fn = Fn-1 + Fn-2 (n ≥ 2)
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//	printf("%d", fibonacci(n));
//}
#pragma endregion 백준 10870 : 피보나치수 5

#pragma region
int num(int n)// 반복할 내용과 관련된 변수는...??
{
	if (n == 0)
	{
		return 0;
	}
	//기저조건 Fn = Fn-1 + Fn-2 (n ≥ 2)
	int digit[] = { 0 };
	for (int i = 0; i < n - 1; i++)
	{
		digit[i]= n % 2;
		n /= 2;
		return digit[i];
	}	
}
int main(void)
{
	int n;
	scanf_s("%d", &n);

	for (int i = n - 1; i >= 0; i--)
	{
		printf("%d", num(i));
	}
	return 0;
}
#pragma endregion 십진수 입력 받아서 재귀로 이진수로 출력하기