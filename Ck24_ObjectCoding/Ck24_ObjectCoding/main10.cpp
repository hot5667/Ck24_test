#include <iostream>

int main()
{
	// ������
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
	// �����ʹ� ����, �ؼ� ��Ŀ� ���� �ٸ��� �� �� �ִ�.
	pFloat = (float*)&i;
	
	float test = *pFloat;
// ==========================================================================================


	void* pVoid = nullptr;
	pVoid = &i;



	return 0;
}