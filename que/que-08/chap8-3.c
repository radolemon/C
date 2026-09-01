/*
    <課題 (chap8-3.c)>
    大文字('A' ~ 'Z')を１文字入力し、
    小文字('a' ~ 'z')に変換して出力する動作を
    '0'が入力されるまで繰り返す。
*/

#include <stdio.h>

int main(void) {
    char c;

    while (1) {
        printf("大文字('A' ~ 'Z')：");
        scanf("%c", &c);
        getchar();

        if (c == '0') break;

        printf("\n%c\n\n", c + ('a' - 'A'));
    }

    return 0;
}
