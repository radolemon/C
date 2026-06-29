#include <stdio.h>

int main(void)
{
    int a,b;

    printf("データを二つ入力してください。");
    scanf("%d%d", &a,&b);

    if(a > b)
    printf("%dが%dよりも大きいです\n", a, b);
    else if (b > a)
    printf("%dが%dよりも大きいです\n", b, a);
    else
    printf("どっちも同じ\n");

    return 0;
}