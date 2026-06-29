#include<stdio.h>
int main(void)
{
    int h; //身長
    printf("身長を入力せよh:"); scanf("%d",&h);
    printf("標準体重は%.1fです。\n", (h-100)*0.9);

    return 0;
}