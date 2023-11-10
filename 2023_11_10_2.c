#include<stdio.h>

int main(void) {

	int max;

	printf("最大値を入力してください。偶数のみを表示します。");

	scanf_s("%d", &max);

	for (int i = 1; i <= max; i++)
	{
		if (i % 2 == 0)printf("%d\n", i);
	}
	printf("表示しました。");
	return 0;
}