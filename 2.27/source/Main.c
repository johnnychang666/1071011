#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	printf("    *\n");
	printf("   ***\n");
	printf("  *****\n");
	printf(" *******\n");
	printf("*********\n");
	for (i = 1; i <= 9; i=i+2)
	{
		for (j = 4; j >(i-1)/2; j--) printf(" ");
		for (j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
	
	system("pause");
	return 0;
}