#include <iostream>

struct Mytype
{
	int a;
	float f;
};

int main()
{
	Mytype type = {};

	Mytype* ptype = &type;

	ptype->a = 20;
	ptype->f = 34.f;

	return 0;
}