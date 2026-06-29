#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("三つの整数を入力せよ。");
    scanf("%d%d%d", &a,b,c);

    if(a == b && a == c)
        puts("三つの値は等しいです。");
    
    else if(a == b || a==c || b==c)
        puts("二つの値は等しい");
    
        else
        printf("三つの値は異なります");
    
    return 0;
}