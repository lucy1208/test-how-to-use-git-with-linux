#include <stdio.h>
#include "add.h"

int main(void) 
{
	
	printf("Hello, world!\n");
	
	int a, b;
	printf("Enter two number to add\n");
	scanf("%d%d",&a, &b);
	printf("Sum = %d\n", add(a, b));
	
	return 0;
  
}
