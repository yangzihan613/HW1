#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0, b = 0;
	printf("�п�J��Ӿ�ƽХΪŮ�j�}: ");
	scanf("%d %d",&a,&b);

	printf("\n");
	if (a == 0 || b == 0)
		printf("�����0");
	else
	{
		if (a % b == 0)
			printf("�O�������Y");
		else
			printf("���O�������Y");
	}
	printf("\n");
	system("pause");
	return 0;

}