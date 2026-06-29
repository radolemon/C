#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("手持ちの金額:"); scanf("%d", &a);
    printf("単価:"); scanf("%d", &b);
    printf("個数:"); scanf("%d", &c);
    if(c >= 21){
        puts("単価が20%オフになります。");
        b = b * 0.8;
    }
    else if(b >= 11){
        puts("単価が10%オフになります。");
        b = b * 0.9;
    }
    else if(b >= 6){
        puts("単価が5%オフになります。");
        b = b * 0.95;
    }

    if(a >= b * c)
    {
        printf("買えます。おつりは%d円です。\n", a-b*c);
    }
    else{
        printf("買えません。%d個までなら買えます。", a/b);
    }
    return 0;
}