#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void) {

	char a[100];

	printf("�p�X���[�h����͂��Ă�������");

	scanf_s(" % 99s");

	int len = strlen(a);
	int big = 0;
	int small = 0;
	int other = 0;

	for (int i = 0; i < len; i++){

		if (a[i] >= 'A' && a[i] <= 'Z') big++;
		else if (a[i] >= 'a' && a[i] <= 'z') small++;
		else other++;

	}

	bool l = false;
	bool b = false;
	bool s = false;
	bool o = false;

	if (len >= 8 && len <= 16) l = true;
	if (big >= 1)b = true;
	if (small >= 1)s = true;
	if (other >= 1)o = true;

	if (l == true && b == true && s == true && o == true) printf("�����ɍ��v���Ă��܂��I");

	if (l == false) printf("����������܂���I");
	if (b == false)printf("�啶���������Ă��܂���I");
	if (s == false) printf("�������������Ă��܂���I");
	if (o == false)printf("���̑��̕����������Ă��܂���I");


	//if (len >= 8 && len <= 16 && big >= 1 && small >= 1 && other >= 1) printf("�����ɍ��v���Ă��܂��I");
	//else if (len>=8)

	return 0;

}