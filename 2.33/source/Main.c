#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c,d,e,f;
	printf("請輸入今天共有幾個人搭乘:");
	scanf_s("%f", &a);
	printf("請輸入今天共開多少里程數:");
	scanf_s("%f", &b);
	printf("請輸入一公升汽油多少錢:");
	scanf_s("%f", &c);
	printf("請輸入一公升汽油能開多少公里:");
	scanf_s("%f", &d);
	printf("請輸入今天的停車費:");
	scanf_s("%f", &e);
	printf("請輸入今天過路費:");
	scanf_s("%f", &f);

	printf("今天每一個人共花費%.1f元\n",((b/d*c+e+f)/a));


	system("pause");
	return 0;

}