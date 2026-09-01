#include <stdio.h>

void reverse_str(char []); 

int main(void) {
    char str[128];

    printf("入力文字列: ");
    scanf("%s", str);

    reverse_str(str);

    printf("%s", str);
}

void reverse_str(char str[]) {
    char tmp;
    int i = 0;

    while(str[i] != '\0') i++;

    for (int j = 0; j <= i / 2; j++) {
        char tmp = str[j];
        str[j] = str[(i - 1) - j];
        str[(i - 1) - j] = tmp;
    }
}
