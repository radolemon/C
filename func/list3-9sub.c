#include <stdio.h>
void jud_no(int);

int main(void) {
    int no;

    printf("整数を入力せよ：");
    scanf("%d", &no);

    jud_no(no);

    return 0;
}

void jud_no(int n) {
    if (n == 0)
        puts("その数は０です。");
    else if (n > 0)
        puts("その数は正です。");
    else
        puts("その数は負です。");
}
