#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//�Τ���printf�C�L���r��
	printf("    *\n");
	printf("   ***\n");
	printf("  *****\n");
	printf(" *******\n");
	printf("*********\n");


	printf("\n\n\n");


	//�γ�@printf�C�L���r��
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 5; j > i; j--)
			printf(" ");
		for (int j = 1; j < i * 2; j++)
			printf("*");

		printf("\n");
	}
	system("pause");
	return 0;

}