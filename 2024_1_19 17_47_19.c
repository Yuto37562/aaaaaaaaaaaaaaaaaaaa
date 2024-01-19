/* main.c */ 
#include <stdio.h>

/* 基本に忠実なFizzBuzz */
int main(void)
{
    int a;
    int b;
    int c;

    printf("aの値を入力してください。");
    scanf("%d", &a);
    while (a==0){
        printf("もう一度0以外の数字を入力してください。");
        scanf("%d", &a);
    }
    printf("bの値を入力してください。");
    scanf("%d",&b)
    
    printf("cの値を入力してください。");
    scanf("%d",&c)

    printf("%d,%d,%d",a,b,c);

    return 0;
}

