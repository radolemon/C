#include <stdio.h>

int main(void)
{
    double no;

    printf("実数を入力"); scanf("%lf", &no);
    printf("%fその1.1倍は%lfです\n", no,1.1 * no);

    return 0;
}