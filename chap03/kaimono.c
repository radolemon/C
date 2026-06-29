#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("手持ちの金額:");  scanf("%d", &a);
    printf("単価:"); scanf("%d", &b);
    printf("個数:"); scanf("%d", &c);

    if(a >= b * c)
    {
        printf("買えます。おつりは%d円です。\n", a-b*c);
    }
    else{
        printf("買えません。%d個までなら買えます。", a/b);
    }
    return 0;
}