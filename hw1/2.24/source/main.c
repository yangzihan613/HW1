#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int t = 0;
	printf("請輸入一個整數 = ");
	scanf("%d", &t);

	printf("\n");

	if (t % 2 == 1)
	{
		printf("奇數%d\n", t);
	}
	if (t % 2 == 0)
	{
		printf("偶數%d\n", t);
	}
	system("pause");
	return 0;
}