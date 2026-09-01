#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char name[48];
    char age[] = "20";

    printf("お名前は：");
    scanf("%s", name);

    printf("年齢は：");
    scanf("%s", age);

    int i_age = atoi(age);

    printf("こんにちは、%sさん!!\n", name);
    printf("10年後は%d歳です。\n", i_age + 10);

    return 0;
}
