#include<stdio.h>

int main(void) {

	char a = 0;

	printf("�ꕶ�����͂��Ă�������\n");

	scanf_s("%c",&a);

	if (a >= 'A' && a <= 'Z')  printf("�啶�����܂܂�Ă��܂�");
	else printf("�啶���͊܂܂�Ă��܂���");

	return 0;
}