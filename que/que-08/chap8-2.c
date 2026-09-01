/*
    <課題 (chap8-2.c)>
    ２つの小文字を入力して、小さい文字から大きい文字までを
    順番に１文字ずつ出力する
*/

#include <stdio.h>

int main(void) {
    char c1, c2, tmp;

    scanf("%c%c", &c1, &c2);

    if (c1 > c2) {
        tmp = c1;
        c1 = c2;
        c2 = tmp;
    }

    for (int c = c1; c <= c2; c++)
        printf("%c ", c);

    return 0;
}
