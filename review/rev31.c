#include <stdio.h>

int main(void) {
    char str[128];

    printf("入力文字列: ");
    scanf("%s", str);

    printf("あなたは%sと入力しました。", str);

    return 0;
}
