#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float mileage = 0, money = 0, kilometer = 0, parking = 0, toll = 0;
	int all = 0;
	printf("�@��Ѫ����{�� = ");
	scanf("%f", &mileage);

	printf("�T�o�@����/�[�ڦh�ֿ� = ");
	scanf("%f", &money);

	printf(" �����@����/�[�گ��p�h�֤��� = ");
	scanf("%f", &kilometer);

	printf(" �@�Ѫ������O = ");
	scanf("%f", &parking);

	printf(" �@�Ѫ��q��O(�L���O) = ");
	scanf("%f", &toll);

	if((mileage % kilometer !=0)//�����O�_���p���I
	all = (mileage / kilometer) * money + parking + toll+1;//�����ܵL����i��

	printf("�@�Ѫ�O = %d", all);

	system("pause");
	return 0;
}