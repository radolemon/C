#include <stdio.h>
#include <stdlib.h>

void encryption(char [], int);
void decryption(char [], int);

int main(void) {
    char str[256];

    puts("暗号化する文字列を入力してください. ");
    scanf("%[^\n]%*c", str);

    encryption(str, 13);
    printf("%s\n", str);

    decryption(str, 13);
    printf("%s", str);

    return 0;
}

void encryption(char str[], int num) {
    int i = 0;

    for (int j = 0; j < num; j ++) {
        for (i = 0; str[i] != '\0'; i++) {
            if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
                str[i] += 1;
            else if(str[i] == 'z' || str[i] == 'Z')
                str[i] -= 25;
        }
    }
}

void decryption(char str[], int num) {
    int i = 0;

    for (int j = 0; j < 26 - num; j++) {
        for (i = 0; str[i] != '\0'; i++) {
            if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
                str[i] += 1;
            else if(str[i] == 'z' || str[i] == 'Z')
                str[i] -= 25;
        }
    }
}
