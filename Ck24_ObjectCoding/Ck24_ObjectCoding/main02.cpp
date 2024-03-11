#include <iostream>


int main()
{
	//cosnt 키워드
	int a = 10;

	a = 20;
	
	// const 키워드를 사용한 변수는 상수(R-Value) 로 취급이 가능하다.
	const int b = 100; // 초기화 시점에만 한번 같이 대입 가능
	//b = 1500; // 상수처럼 초기화 이후에는 대입이 불가능하다.

	// const 변수인 b 의 주소를 가져와서 수정하는것을 막을 수는 없다.
	int* ptr = (int*) &b;
	*ptr = 200;

	// const + 포인터
	// 1. 포인터 변수 자체가 상수로 취급
	// 2. 포인터 변수가 가르키는 대상을 수정하는 기능이 상수화

	//int i1 = 10;
	//int i2 = 20;


	// 포인터가 가르키는 대상을 수정할 수 없음 (원본 변수가 상수가 된건 아님)
	/*int* const PintPtr = &i1;
	*PintPtr = 100;

	const int* PintPtr1 = &i1;
	PintPtr1 = &i2;
	*PintPtr1;*/

	//const int* const pIntPtr2 //수정 및 접근 불가 단 읽기는 가능

	// 문자열 - 각 문자을 연속된 메모리 공간안에 나열, 문자열의 끝은 '\0' 널문자로 알린다.
	char c = 49;
	char szStr[5] = { 97,98,99 };
	
	//'\a' 문자는 숫자로 0이다. 0이 널문자로 취급된다.
	int i = '\0';
	i = 'a';

	//숫자 및 문자열 변환 과제
	// char, wchar_t 문자열 전용 자료형
	short s = 97;
	wchar_t wc = 97;

	return 0;
}