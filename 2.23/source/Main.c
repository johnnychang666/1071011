#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,a[3],x;
	printf("Please enter three integers:");
	for (i = 0; i < 3; i++) scanf_s("%d",&a[i]);
	
	for (i = 0; i <3; ++i)
	{
		for (j = 0 ; j < i; ++j)
		{
			if (a[i]<a[j])
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
	printf("The biggest integer:%d\n",a[2]);
	printf("The smallest integer:%d\n",a[0]);

	system("pause");
	return 0;
}