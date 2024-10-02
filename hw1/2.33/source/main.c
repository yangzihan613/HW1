#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float money = 0, parking = 0, toll = 0, fuel_cost = 0;
    int kilometer = 0, mileage = 0;
    float all_money = 0;

    printf("一整天的里程數 = ");
    scanf("%d", &mileage);

    printf("汽油一公升/加侖多少錢 = ");
    scanf("%f", &money);

    printf("平均一公升/加侖能行駛多少公里 = ");
    scanf("%d", &kilometer);

    printf("一天的停車費 = ");
    scanf("%f", &parking);

    printf("一天的通行費(過路費) = ");
    scanf("%f", &toll);

    // 計算油費
    fuel_cost = (float)mileage / kilometer * money;

    // 計算總費用
    all_money = fuel_cost + parking + toll;

    // 無條件進位
    all_money = ceil(all_money);

    printf("一天花費 = %.0f\n", all_money); 
    system("pause");
    return 0;
}