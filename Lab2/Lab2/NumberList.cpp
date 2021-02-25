#include "NumberList.h"
#include <cstdio>

void NumberList::Init()
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	if (count < 10) {
		this->numbers[count] = x;
		this->count++;
		return true;
	}
	return false;
}

void NumberList::Sort()
{
	int i, j, aux;
	for (i = 0; i < this->count - 1; i++)
		for (j = 0; j < this->count - i - 1; j++)
			if (this->numbers[j] > this->numbers[j + 1]) {
				aux = this->numbers[j];
				this->numbers[j] = this->numbers[j + 1];
				this->numbers[j + 1] = aux;
			}
}

void NumberList::Print()
{
	int i;	
	for (i = 0; i < this->count; i++) {
		printf("%d, ", this->numbers[i]);
	}
	printf("\n");
}
