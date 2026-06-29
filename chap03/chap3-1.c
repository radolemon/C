#include <stdio.h>

int main(void)
{
    double tate,yoko;

    printf("縦の長さ");
    scanf("%lf", &tate);
    printf("横の長さ");
    scanf("%lf", &yoko);

    if(tate >= yoko){
        puts("縦長の長方形です。");
    }
    else{
        puts("横長の長方形です。");
    }
    printf("面積は%.2f",tate*yoko);

    return 0;
}