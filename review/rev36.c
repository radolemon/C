#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[] = "Uejobi", str2[] = "Cejobi";

    puts("strcmp()関数の出力を考察します。");

    printf("str1: %s, str2:%s の比較結果は%dです。\n", str1, str2, strcmp(str1, str2));
    printf("str1: %s, str2:%s の比較結果は%dです。\n", str1, str1, strcmp(str1, str1));
    printf("str1: %s, str2:%s の比較結果は%dです。\n", str1, str2, strcmp(str2, str1));

    return 0;
}

// strcmpはstr1とstr2の文字を比較し同じかどかを比較する
