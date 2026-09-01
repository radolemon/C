#include <stdio.h>

void put_stringn(const char s[], int n) {
    for (int i = 0; i <= n; i++) {
        printf("%s", s);
    }
}

int main(void) {
    char str[128];
    int n;

    printf("入力：");
    scanf("%s", str);

    printf("回数入力：");
    scanf("%d", &n);

    put_stringn(str, n);
}
