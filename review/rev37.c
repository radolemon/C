#include <stdio.h>
#include <string.h>

void check(char str1[], char str2[]) {
    while(1) {
        if (strcmp(str1, str2) == 0) {
            printf("一致しました。");
            break;

        } else {
            printf("一致しません。もう一度入力: ");
            scanf("%s", str2);
        }
    }
}

int main(void) {
    char str1[128],str2[128];

    printf("入力文字列: ");
    scanf("%s", str1);

    printf("確認のため再入力: ");
    scanf("%s", str2);

    check(str1, str2);

    return 0;
}
