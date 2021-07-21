#include <stdio.h>
#include "add.h"
#include "multi.h"

int main(void) 
{
	
	printf("Hello, world!\n");
	
	int a, b;
	printf("Enter two number to add\n");
	scanf("%d%d",&a, &b);
	printf("Sum = %d\n", add(a, b));
	
	int c, d;
	printf("Enter other two number to add\n");
	scanf("%d%d",&c, &d);
	printf("Ans = %d\n", multi(c, d));
	
	return 0;
  
}
