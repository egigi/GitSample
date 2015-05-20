#include <stdio.h>
#include <stdlib.h>

void master()
{
	int i = 1;

	printf("I am the master %d", i);
}

void slave()
{
	int n = 2;

	printf("I am the slave %d", n);
}


void main()
{
	master();

	system("PAUSE");
}
