#include <stdio.h>
#include <stdlib.h>

void master()
{
	printf("I am the master");
}

void slave()
{
	printf("I am the slave");
}


void main()
{
	master();

	system("PAUSE");
}
