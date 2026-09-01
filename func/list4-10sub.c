#include <stdio.h>
int input_no(void);

int main(void) {
    int no = input_no();

    printf("その数をさかさまから読むと");
    while (no > 0) {
        printf("%d", no % 10);
        no /= 10;
    }
    puts("です。");

    return 0;
}

int input_no(void) {
    int no;

    do {
        printf("正の整数を入力せよ：");
        scanf("%d", &no);
        if (no <= 0)
            puts("\a正でない数字を入力しないでください。");
    } while (no <= 0);

    return no;
}
