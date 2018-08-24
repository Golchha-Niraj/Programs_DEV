#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

main()
{
	int *ptr=new int();
//	*ptr=10;
	printf("ptr=%d.\n",*ptr);
	free(ptr);
	ptr=new int();
	*ptr=10;
	printf("ptr=%d.\n",*ptr);
	delete  []ptr;
//	ptr=NULL;
}
