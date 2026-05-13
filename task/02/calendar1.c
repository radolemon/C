#include <stdio.h>

int main(void) {
    int mos;

    printf("月を入力："); scanf("%d", &mos);

    switch (mos) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: puts("31日です。"); break;

        case 4:
        case 6:
        case 9:
        case 11: puts("30日です。"); break;

        case 2: puts("28日です。"); break;
    }
}
