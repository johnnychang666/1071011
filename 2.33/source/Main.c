#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b,c,d,e,f;
	printf("�п�J���Ѧ@���X�ӤH�f��:");
	scanf_s("%f", &a);
	printf("�п�J���Ѧ@�}�h�֨��{��:");
	scanf_s("%f", &b);
	printf("�п�J�@���ɨT�o�h�ֿ�:");
	scanf_s("%f", &c);
	printf("�п�J�@���ɨT�o��}�h�֤���:");
	scanf_s("%f", &d);
	printf("�п�J���Ѫ������O:");
	scanf_s("%f", &e);
	printf("�п�J���ѹL���O:");
	scanf_s("%f", &f);

	printf("���ѨC�@�ӤH�@��O%.1f��\n",((b/d*c+e+f)/a));


	system("pause");
	return 0;

}