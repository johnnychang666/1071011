#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,k; 

	/* the first one */
	for (i = 0; i <= 8; i++)  printf("*");
	printf("\n");
	for (i = 0; i <= 6; i++)  printf("*       *\n");
	for (i = 0; i <= 8; i++)  printf("*");
	printf("\n");

	/* the second one */
	printf("  ***\n");
	printf(" *   *\n");
	for (i = 0; i <= 4; i++) printf("*     *\n");
	printf(" *   *\n");
	printf("  ***\n");
	printf("\n");

	/* the thrid one */
	for (i = 0; i <=4; i=i+2)
	{
		for (j = 3; j >= i;j=j-2) printf(" ");
		for (j = 0; j <= i;j++) printf("*");
		printf("\n");
	}
	for (i = 0; i <= 5; i++) printf("  *\n");
	printf("\n");

	/* the four one */
	for (i = 1; i <=9; i++)
	{
		for (j = 1; j <=9; j++)
		{
			if ((i+j==14) || (i - j == 4) || (i + j ==6) || (j - i == 4))  printf("*");
			else printf(" ");
		}
		printf("\n");
	}


	system("pause");
	return 0;
}