#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float money = 0, parking = 0, toll = 0, fuel_cost = 0;
    int kilometer = 0, mileage = 0;
    float all_money = 0;

    printf("�@��Ѫ����{�� = ");
    scanf("%d", &mileage);

    printf("�T�o�@����/�[�ڦh�ֿ� = ");
    scanf("%f", &money);

    printf("�����@����/�[�گ��p�h�֤��� = ");
    scanf("%d", &kilometer);

    printf("�@�Ѫ������O = ");
    scanf("%f", &parking);

    printf("�@�Ѫ��q��O(�L���O) = ");
    scanf("%f", &toll);

    // �p��o�O
    fuel_cost = (float)mileage / kilometer * money;

    // �p���`�O��
    all_money = fuel_cost + parking + toll;

    // �L����i��
    all_money = ceil(all_money);

    printf("�@�Ѫ�O = %.0f\n", all_money); 
    system("pause");
    return 0;
}