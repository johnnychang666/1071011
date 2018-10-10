#include<stdio.h>
#include<stdlib.h>

int main(void)
{
		int a;
		printf("Enter a integer:");
		scanf_s("%d", &a);

		if (a % 2 == 0) printf("This integer is even.\n");
		else printf("This integer is odd.\n");

		system("pause");
		return 0;


}