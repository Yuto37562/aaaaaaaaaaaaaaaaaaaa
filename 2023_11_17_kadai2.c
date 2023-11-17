#include<stdio.h>

int main(void) {

	char a = 0;
	int select;

	printf("‘å•¶Žš‚Æ¬•¶Žš‚ª¬‚¶‚Á‚½•¶‚ð‘S•”‘å•¶Žš‚©¬•¶Žš‚É‚µ‚Ü‚·\n‘å•¶Žš‚É‚·‚éê‡‚Í1‚ð¬•¶Žš‚É‚·‚éê‡‚Í2‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");

	scanf_s("%d", &select);

	printf("ŽŸ‚ÉA•ÏŠ·‚µ‚½‚¢•¶‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

	//scanf_s("%c", &a);

	if (select == 1) {
		printf("1");
	}
	else if (select == 2) {
		printf("2");

	}
	else {


	}

//	if (a >= 'A' && a <= 'Z')  printf("‘å•¶Žš‚ªŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚·");
//	else printf("‘å•¶Žš‚ÍŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚¹‚ñ");

	return 0;
}