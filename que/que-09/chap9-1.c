/*
    1. str_length() 関数を使って8文字以上のパスワードを設定するプログラムを作って下さい
    2. パスワードに大文字と小文字両方含まれているかを調べられるようにしてください。
*/
#include <stdio.h>
#include <stdlib.h>

int str_length(const char str[]) {
    int len = 0;
    while (str[len] != '\0') len ++;

    return len;
}

int str_check(const char str[], int len) {
    int ucl = 0;
    int mark = 0;

    for (int i = 0; i <= len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') ucl++;
        if (str[i] >= '!' && str[i] <= '/') mark++;
    }

    if (ucl >= 3 && mark >= 3) return 1;
    else return 0;
}

int pass_check(int len, int check) {
    if (len >= 8 && check == 1) return 1;
    else return 0;
}

int main(void) {
    char pass[128];
    int len;

    puts("パスワードを入力してください。");

    do {
        printf("パスワード: "); scanf("%s", pass);
        len = str_length(pass);
    } while (pass_check(len, str_check(pass, len)) != 1);

    printf("パスワードを設定しました。");

    return 0;
}
