#include <iostream>

int main()
{
	// 포인터
	int* pint = nullptr;
	int i = 255;
	pint = &i;
	*pint = 100;

	char* pChar = nullptr;
	char numChar = 1;
	short* pShort = nullptr;
	float* pFloat = nullptr;
	float numFloat = 50.f;

	pChar = &numChar;
	// 데이터는 동일, 해석 방식에 따라서 다르게 볼 수 있다.
	pFloat = (float*)&i;
	// float* 타입 포인터 변수에, int 변수 의 주소를 강제로 입력
	float test = *pFloat;
	// float* 변수가 해당 주소로 접근하면, 정수를 기록하고 있던 공간을 부동소수점 포현방식(float)
	// 으로 해석해서 읽어들이게 됨, 그렇게 읽은 값을 f2, float 타입 변수에 입력함
// ==========================================================================================

	void* pVoid = nullptr;
	pVoid = &i;


	// 배열과 포인터
	// 1, 배열의 이름이 주소다.
	// 2. 배열의 각 요소는 메모리에 연속적인 구조를 가진다.
	int arrint[10] = {};
	 
	parr[0] = 10; //*(parr + 0) = 10

	int* parr = arrint;
	*(parr + 4) = 20;



	return 0;
}