#include<stdio.h>

int main(void) {

	char a = 0;
	int select;

	printf("�啶���Ə�������������������S���啶�����������ɂ��܂�\n�啶���ɂ���ꍇ��1���������ɂ���ꍇ��2����͂��Ă�������");

	scanf_s("%d", &select);

	printf("���ɁA�ϊ�������������͂��Ă�������\n");

	//scanf_s("%c", &a);

	if (select == 1) {
		printf("1");
	}
	else if (select == 2) {
		printf("2");

	}
	else {


	}

//	if (a >= 'A' && a <= 'Z')  printf("�啶�����܂܂�Ă��܂�");
//	else printf("�啶���͊܂܂�Ă��܂���");

	return 0;
}