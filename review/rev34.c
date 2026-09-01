#include <stdio.h>

int scan_char(char [], int);

int main(void) {
    char str[128], x;
    int i = 0,
        result;

    printf("入力文字列: ");
    scanf("%s", str);
    
    getchar();

    printf("検索文字: ");
    scanf("%c", &x);

    getchar();

    result = scan_char(str, x);

    if (result == 0) {
        printf("見つかりませんでした。");
    } else {
        printf("%d文字目に見つかりました。", result + 1);
    }
}

int scan_char(char str[], int x) {
    for (int i = 0; str[0] != '\0'; i++) {
        if (str[i] == x) return i;
    }

    return 0;
}
