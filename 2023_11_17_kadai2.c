#include<stdio.h>

int main(void) {

	char a = 0;
	int select;

	printf("大文字と小文字が混じった文を全部大文字か小文字にします\n大文字にする場合は1を小文字にする場合は2を入力してください");

	scanf_s("%d", &select);

	printf("次に、変換したい文を入力してください\n");

	//scanf_s("%c", &a);

	if (select == 1) {
		printf("1");
	}
	else if (select == 2) {
		printf("2");

	}
	else {


	}

//	if (a >= 'A' && a <= 'Z')  printf("大文字が含まれています");
//	else printf("大文字は含まれていません");

	return 0;
}