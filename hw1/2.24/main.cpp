#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int t = 0 ;
	printf("��J�@�ӼƦr= ");
	scanf("%d", &t);

	printf("\n");

	if (t % 2 == 1)
	{
		printf("�_��  %d\n",t);
	}
	if (t % 2 == 0)
	{
		printf("����  %d\n",t);
	}
	system("pause");
	return 0;
}