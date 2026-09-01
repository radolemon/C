#include <stdio.h>

// マイレージシステム略
int ms(int);

int main(void) {
    int m;

    printf("走行距離："); scanf("%d", &m);
    printf("運賃は%d円です。\n", ms(m));

    return 0;
}

int ms(int dist) {
    if (dist > 1200) {
        return 600 + ((dist - 901) / 300) * 100;
    } else {
        return 600;
    }
}
