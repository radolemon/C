#include<stdio.h>
int main(void)
{
    int x, y;
    
    puts("整数を入力せよ。");
    printf("整数x:"); scanf("%d", &x);
    printf("整数y:"); scanf("%d", &y);
    
    printf("xの値はyの%d％です。\n",(int)(((double)x/y)*100) );

    return 0;
}