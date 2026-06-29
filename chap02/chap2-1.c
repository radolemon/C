#include <stdio.h>

int main(void)
{
    double r,h,pi = 3.14;
    printf("半径r:"); scanf("%lf", &h);
    printf("高さh:"); scanf("%lf", &h);

    printf("半径%f,高さ%fの円錐の体積は%.2fです。\n",r,h,r*r*pi*h/3);
    
    return 0;
}

