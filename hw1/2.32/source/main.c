#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float h = 0, w = 0, B = 0;

	printf("�п�J����(m)=");
	scanf("%f", &h);

	printf("\n�п�J�魫(kg)=");
	scanf("%f", &w);

	B = w / (h * h);
	printf("\nBMI=%f\n\n", B);

	if (B < 18.5)
		printf("�L��  < 18.5");
	else if (B < 25)
		printf("���`  18.5 ~ 24.9");
	else if (B < 30)
		printf("�L��  25 ~ 29.9");
	else
		printf("�έD  >= 30");

	printf("\n");
	system("pause");
	return 0;
}