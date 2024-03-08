#include <iostream>
#include "Bubble.h"


int main()
{
	long long a = 100;
	long long b = 0;

	DataCopy(&b, sizeof(long long), &a);
}

void DataCopy(void* _DestNation, unsigned int _DataSize, void* _Source)
{

	for (int i = 0; i < _DataSize; ++i)
	{
		((unsigned char*)_DestNation)[i] = ((unsigned char*)_Source)[i];
	}

}
