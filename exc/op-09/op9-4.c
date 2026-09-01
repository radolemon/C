#include <stdio.h>

void null_string(char a[]) {
    a[0] = '\0';
}

int main(void) {
    char str[128];

    printf("文字列を入力:");
    scanf("%s", str);

    printf("入力された文字は%sです。\n", str);

    null_string(str);

    printf("入力された文字は%sです。\n", str);

    return 0;
}
