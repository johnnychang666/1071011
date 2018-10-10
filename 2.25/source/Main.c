#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i <=4; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (i == 0) printf("P");
			else if ((i==2 || i==1 || i==3) && (j == 4 || j == 8)) printf("P");
			else if ((i==4) && (j == 5 || j == 7)) printf("P");
			else printf(" ");	
		}
		printf("\n");
	}
	printf("\n");
	i = 0;
	j = 0;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <=8; j++)
		{
			if (i == 0 && (j==2 || j==3)) printf("J");
			else if ((i == 1 || i == 3) && j == 1) printf("J");
			else if (i == 2 && j == 0) printf("J");
			else if (i == 4 && (j>1)) printf("J");
			else printf(" ");
		}
		printf("\n");
	}
	printf("\n");
	i = 0;
	j = 0;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			if (i == 0 ) printf("D");
			else if ((i == 1 || i == 2) && (j == 0 || j==8)) printf("D");
			else if (i == 3 && (j == 1 || j==7)) printf("D");
			else if (i == 4 && (j==2 || j==3 || j==4 || j==5 ||j==6)) printf("D");
			else printf(" ");
		}
		printf("\n");
	}


	printf("\n");

	system("pause");
	return 0;
}