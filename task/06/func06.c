#include <stdio.h>

int ms(int);

int main(void) {
    int m;

    printf("走行距離："); scanf("%d", &m);
    ms(m);
}

int ms(int dist) {
    int co[3];
    for (int i = 1; i <= 2; i++) {
        switch (i) {
            case 1:
                if (dist > 1200) {
                    co[i] = 600 + ((dist - 901) / 300) * 100;
                } else {
                    co[i] = 600;
                }

                break;
            case 2:
                if (dist > 1000) {
                    co[i] = 400 + ((dist - 801) / 200) * 100;
                } else {
                    co[i] = 400;
                }

                break;
        }
    }

    printf("A社：%d円\n", co[1]);
    printf("B社：%d円\n", co[2]);

    int i = dist;

    while (1) {
        i += 1;
        
        if (i > 1200) {
            co[1] = 600 + ((i - 901) / 300) * 100;
        } else {
            co[1] = 600;
        }

        if (i > 1000) {
            co[2] = 400 + ((i - 801) / 200) * 100;
        } else {
            co[2] = 400;
        }

        if (co[1] < co[2]) {
            co[0] = i;
            break;
        }
    }

    printf("%dmからA社の運賃のほうが安くなります。\n", co[0]);
}
