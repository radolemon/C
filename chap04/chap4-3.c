#include <stdio.h>

int main(void)
{
    int flg = 1;

    printf("+-+-を作る:");
    scanf("%d", &flg);

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= 5; j++){
            if(flg == 1) putchar('+');
            else putchar('-');
            flg = flg * (-1);
    }
    putchar('\n');
}
return 0;
}