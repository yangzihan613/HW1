#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int temp = 0;
	int z[3] = { 0 };
	printf("請輸入三個數字用空白間隔開\n");
	scanf(" %d %d  %d", &z[0], &z[1], &z[2]);
	for (int j = 0; j <= 1; j++)
	{
		for (int i = 0; i <= 1; i++)
		{
			if (z[i] < z[i + 1])
			{
				temp = z[i];
				z[i] = z[i + 1];
				z[i + 1] = temp;

			}
		}
		
	}
	printf("max= %d\n", z[0]);
	printf("min= %d\n", z[2]);
	system("pause");
	return 0;
}