#include <stdio.h>

void display(char []);

int main(void) {
    char str[128];

    printf("文字列: ");
    scanf("%s", str);

    printf("小文字を取り除いた文字列: ");
    display(str);
}

void display(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' || str[i] > 'z') {
            printf("%c", (char)str[i]);
        }
    }
}
