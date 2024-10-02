#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//用五個printf列印金字塔
	printf("    *\n");
	printf("   ***\n");
	printf("  *****\n");
	printf(" *******\n");
	printf("*********\n");


	printf("\n\n\n");


	//用單一printf列印金字塔
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