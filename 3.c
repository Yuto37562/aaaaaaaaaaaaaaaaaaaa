#include <stdio.h>

int main(void) {

	int a;

	printf("�����̓V�C�����߂Ă��������B1.�� 2.�� 3.���J");
	scanf_s("%d", &a);

	if (a == 1) printf("���Ȃ��͗��ɑł���܂��B");
	else if (a == 2) printf("�Ԃ��^�]����ƒǓˎ��̂��N�����ł��傤�B");
	else if (a == 3) printf("�Ƃ��Z�����܂��B");
	else printf("�H�H�H�H�H");

	return 0;

}