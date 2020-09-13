#include <stdio.h>
#include <malloc.h>

int main()
{
	int(*arr)[10] = (int(*)[10])malloc(sizeof(int) * 100), count = 0;

	for (int(*i)[10] = arr; i != arr + 10; ++i)
		for (int* j = *i; j != *i + 10; ++j)
			*j = ++count;

	for (int(*i)[10] = arr; i != arr + 10; ++i)
	{
		for (int* j = *i; j != *i + 10; ++j)
			printf("%4d", *j);
		printf("\n");
	}
}
