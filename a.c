#include <stdio.h>

int main(void) {

	int a;

	printf("Please Enter Number:");
	scanf_s("%d", &a);

	int keisan = a % 2;

	if (keisan == 0) {
		printf("計算結果は、偶数です。");
	}
	else printf("計算結果は、奇数です。");

	return 0;

}