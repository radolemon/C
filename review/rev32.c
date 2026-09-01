#include <stdio.h>

int main(void) {
    char str[128];
    int i = 0;

    printf("入力文字列: ");
    scanf("%s", str);

    while(str[i] != '\0') i++;

    printf("%sの文字数：%d", str, i);

    return 0;
}
