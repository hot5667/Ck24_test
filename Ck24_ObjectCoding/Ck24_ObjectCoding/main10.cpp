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
	// float* Ÿ�� ������ ������, int ���� �� �ּҸ� ������ �Է�
	float test = *pFloat;
	// float* ������ �ش� �ּҷ� �����ϸ�, ������ ����ϰ� �ִ� ������ �ε��Ҽ��� �������(float)
	// ���� �ؼ��ؼ� �о���̰� ��, �׷��� ���� ���� f2, float Ÿ�� ������ �Է���
// ==========================================================================================

	void* pVoid = nullptr;
	pVoid = &i;


	// �迭�� ������
	// 1, �迭�� �̸��� �ּҴ�.
	// 2. �迭�� �� ��Ҵ� �޸𸮿� �������� ������ ������.
	int arrint[10] = {};
	 
	parr[0] = 10; //*(parr + 0) = 10

	int* parr = arrint;
	*(parr + 4) = 20;



	return 0;
}