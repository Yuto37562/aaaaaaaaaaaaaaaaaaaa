#include<stdio.h>

int main(void) {

	char a = 0;

	printf("一文字入力してください\n");

	scanf_s("%c",&a);

	if (a >= 'A' && a <= 'Z')  printf("大文字が含まれています");
	else printf("大文字は含まれていません");

	return 0;
}