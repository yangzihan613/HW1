#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int t = 0 ;
	printf("块计= ");
	scanf("%d", &t);

	printf("\n");

	if (t % 2 == 1)
	{
		printf("计  %d\n",t);
	}
	if (t % 2 == 0)
	{
		printf("案计  %d\n",t);
	}
	system("pause");
	return 0;
}