#include <stdio.h>

int main(void) {
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no); // 入力した値を代入

    printf("あなたは%dと入力しましたね。\n", no);

    return 0;
}
