#include <stdio.h>

int main(void) {
    int num, cnt = 0;

    printf("正の整数を入力せよ："); scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        
        cnt ++;

        if (cnt == 10) cnt = 0;

        printf("%d", cnt);
    }

    return 0;
}
