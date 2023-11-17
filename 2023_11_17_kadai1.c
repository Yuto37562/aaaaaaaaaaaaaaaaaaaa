#include<stdio.h>

int main(void) {

	char a = 0;

	printf("ˆê•¶Žš“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

	scanf_s("%c",&a);

	if (a >= 'A' && a <= 'Z')  printf("‘å•¶Žš‚ªŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚·");
	else printf("‘å•¶Žš‚ÍŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚¹‚ñ");

	return 0;
}