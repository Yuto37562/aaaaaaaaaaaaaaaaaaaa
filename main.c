#include <stdio.h>

int main(void) {

	int a, b, sum;

	printf("Please Enter Number:");
	scanf_s("%d", &a);


	printf("Please Enter Number:");
	scanf_s("%d", &b);

	sum = a + b;

	printf("計算結果は、%dです。", sum);

	return 0;

}