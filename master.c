#include <stdio.h>
#include <stdlib.h>

void master()
{
	int i = 1;

	printf("I am the master %d", i);
}

void main()
{
	master();

	system("PAUSE");
}
