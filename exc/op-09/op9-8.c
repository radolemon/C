#include <stdio.h>

void put_stringr(const char s[]) {
    int i;

    for (i = 0; i != '\0'; i++);

    for (int j = i - 1; j >= 0; j--) {
        printf("%s", s[j]);
    }

    putchar('\n');
}

int main(void) {
    char str[128];
    int n;

    printf("入力：");
    scanf("%s", str);

    put_stringr(str);
}
