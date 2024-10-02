#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float mileage = 0, money = 0, kilometer = 0, parking = 0, toll = 0;
	int all = 0;
	printf("一整天的里程數 = ");
	scanf("%f", &mileage);

	printf("汽油一公升/加侖多少錢 = ");
	scanf("%f", &money);

	printf(" 平均一公升/加侖能行駛多少公里 = ");
	scanf("%f", &kilometer);

	printf(" 一天的停車費 = ");
	scanf("%f", &parking);

	printf(" 一天的通行費(過路費) = ");
	scanf("%f", &toll);

	if((mileage % kilometer !=0)//偵測是否有小數點
	all = (mileage / kilometer) * money + parking + toll+1;//有的話無條件進位

	printf("一天花費 = %d", all);

	system("pause");
	return 0;
}