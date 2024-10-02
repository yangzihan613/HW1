#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float h = 0, w = 0, B = 0;

	printf("請輸入身高(m)=");
	scanf("%f", &h);

	printf("\n請輸入體重(kg)=");
	scanf("%f", &w);

	B = w / (h * h);
	printf("\nBMI=%f\n\n", B);

	if (B < 18.5)
		printf("過輕  < 18.5");
	else if (B < 25)
		printf("正常  18.5 ~ 24.9");
	else if (B < 30)
		printf("過重  25 ~ 29.9");
	else
		printf("肥胖  >= 30");

	printf("\n");
	system("pause");
	return 0;
}