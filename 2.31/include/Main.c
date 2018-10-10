#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	printf("number square cube\n");
	for (i = 0; i <= 10; i++)
	{
		printf("%d\t%d\t%d\t", i, (i*i), (i*i*i));
		printf("\n");
	}
	system("pause");
	return 0;

}