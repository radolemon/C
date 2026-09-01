/*
    <課題 (chap8-1.c)>
    大文字'A'～'Z'を１文字入力しその文字から
    'Z'まで１文字ずつ順番に出力する
*/

#include <stdio.h>

int main(void) {
    char c;
    scanf("%c", &c);

    for (int i = c; i <= 'Z'; i++) {
        printf("%c", i);
    }

    return 0;
}
