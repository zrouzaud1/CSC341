#include <stdio.h>
#include <stdlib.h>
//global variables
int x;
int y = 15;
//Main Function
int main(int argc, char *argv[])
{

	int var = 3;

	int *vals;

	vals = &argc;
	printf("First in order is arguments %p\n", vals);
	
	vals = &var;
	printf("Next in order is local variables %p\n", vals);

	vals = (int *)malloc(sizeof(int)*5);
	printf("Next is in the heap %p\n", vals);
	
	vals = &x;
	printf("The uninitailized data %p\n", vals);

	vals=&y;
	printf("Then initialized data %p\n", vals);

	return EXIT_SUCCESS;
}

