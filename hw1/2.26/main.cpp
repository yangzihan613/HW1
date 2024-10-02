#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0, b = 0;
	printf("請輸入兩個整數請用空格隔開: ");
	scanf("%d %d",&a,&b);

	printf("\n");
	if (a == 0 || b == 0)
		printf("不能填0");
	else
	{
		if (a % b == 0)
			printf("是倍數關係");
		else
			printf("不是倍數關係");
	}
	printf("\n");
	system("pause");
	return 0;

}