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
	
	float test = *pFloat;
// ==========================================================================================


	void* pVoid = nullptr;
	pVoid = &i;



	return 0;
}