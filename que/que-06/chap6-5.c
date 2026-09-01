/*
    練習2 (chap6-5.c)
        配列のコピーをする関数
        void a_copy(int d[], int b[], int n);
        を設計して、main関数ないで定義した
        配列をコピーして値を表示してください
*/

#include <stdio.h>
#define NUMBER 5

void a_copy(int src[], int dst[], int n) {
    for (int i = 0; i < n; i++) {
        dst[i] = src[i];
    }
}

int main(void) {
    int a[NUMBER] = {30, 40, 50, 10, 20};
    int b[NUMBER];

    a_copy(a, b, NUMBER);

    for (int i = 1; i <= 2; i++) {
        switch (i) {
            case 1:
                printf("src：");
                break;
            case 2:
                printf("dst：");
                break;
        }

        for (int j = 0; j < NUMBER; j++) {
            if (i == 1) printf("%3d", a[j]);
            else if (i == 2) printf("%3d", b[j]);
        }

        putchar('\n');
    }

    return 0;
}
