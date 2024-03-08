#include <iostream>

int main()
{
	char arrChar[10] = { 2,4,6,8,10,12,14,16,18,20 };

	short* pShort = (short*)arrChar;

	char* pchar = (char*)(pShort + 4);

	int data = *pchar;

	printf(data);
}