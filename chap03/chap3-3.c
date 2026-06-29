#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力:");
    scanf("%d", &no);

    if(no%3 == 0){
        if(no%5 == 0){
        puts("3でも5でも割り切れます。");
        }
        else{
        puts("3でで割り切れます。5では割り切れません。");
        }
    }
    else{
        puts("3で割り切れません。");
    }
    return 0;
}