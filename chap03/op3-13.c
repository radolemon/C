#include <stdio.h>

int main(void)
{
    int month;

    printf("何月ですか:");
    scanf("%d", &month);

    switch(month){
        case 5 : puts("5月は春です。");
        break;
        case 8 : puts("8月は夏です。");
        break;
        case 10 : puts("10月は秋です。"); 
        break;
    }
    return 0;
}