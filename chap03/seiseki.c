#include <stdio.h>

int main(void)
{
    int a;
    printf("テストの点数を入力してください。");
    scanf("%d",&a); 
    if(a >= 80 && a <= 100)
    {
        printf("あなたの成績はAです。");
    }
    else if(a >= 70 && a < 80)
    {
        printf("あなたの成績はBです。");
    }
    else if(a >= 60 && a < 70)
    {
        printf("あなたの成績はCです。");
    }
    else if(a >= 0 && a < 60)
    {
        printf("あなたの成績はDです。");
    }
    else
    {
        printf("判定不能です。");
    }
    return 0;  
}