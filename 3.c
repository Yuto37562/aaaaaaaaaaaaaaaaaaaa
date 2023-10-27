#include <stdio.h>

int main(void) {

	int a;

	printf("明日の天気を決めてください。1.雷 2.霧 3.豪雨");
	scanf_s("%d", &a);

	if (a == 1) printf("あなたは雷に打たれます。");
	else if (a == 2) printf("車を運転すると追突事故を起こすでしょう。");
	else if (a == 3) printf("家が浸水します。");
	else printf("？？？？？");

	return 0;

}