#include <stdio.h>

int main(void) {
    char s[] = "ABC";

    s[0] = '\0';

    printf("文字列sは%sです。", s);

    return 0;
}
