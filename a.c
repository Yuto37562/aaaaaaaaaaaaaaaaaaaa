#include <stdio.h>

int main(void) {

	int a;

	printf("Please Enter Number:");
	scanf_s("%d", &a);

	int keisan = a % 2;

	if (keisan == 0) {
		printf("�v�Z���ʂ́A�����ł��B");
	}
	else printf("�v�Z���ʂ́A��ł��B");

	return 0;

}