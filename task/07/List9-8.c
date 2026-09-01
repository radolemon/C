#include <stdio.h>
#define MAX_STR 128

int str_length(const char []);

int main(void) {
    char pwd[MAX_STR] = "password";
    char str[MAX_STR];
    int i, j, n, flg;

    n = str_length(pwd);
    for(i=0; i < 3; i++) {
        flg = 0;
        printf("パスワードを入力してください：");
        scanf("%s", str);

        if(str_length(str) == n) {
            for(j=0; j<n; j++) {
                if(str[j] != pwd[j]) {
                    flg = 1;
                };
            }
        } else flg = 1;

        if (flg == 0) {
            puts("認証成功しました。");
            break;
        } else puts("パスワードが違います。");
    }

    if (i == 3) 
        puts("３回連続間違えましたので、強制終了します。");

    return 0;
}

int str_length(const char s[]) {
    int len=0;

    while(s[len] != '\0')
        len++;

    return len;
}
