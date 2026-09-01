#include <stdio.h>

int str_chnum(const char s[], int c) {
    int cnt = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) cnt++;

        // printf("%d", cnt);
    }

    // printf("%d", cnt);
    return cnt;
}

int main(void) {
    char str[128];
    char c;
    int chnum;

    printf("文字列の入力：");
    scanf("%s", str);

    getchar();

    printf("検索： ");
    scanf("%c", &c);

    getchar();
    chnum = str_chnum(str, c);


    printf("文字列%sの中に文字%cは%d個あります。\n", str, c, chnum);

    return 0;
}
