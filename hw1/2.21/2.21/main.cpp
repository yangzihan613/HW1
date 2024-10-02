#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a = 0;
	printf("hi\n");  // 添加換行符號
	scanf("%d", &a); // 讀取整數到變量 a
	printf("hi %d\n", a); // 正確的格式化輸出 a 的值
	system("pause");
	return 0;
}
