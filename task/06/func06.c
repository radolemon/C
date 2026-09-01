#include <stdio.h>

int ms(int, int);
int calc(int, int);

int main(void) {
    int m, sel;

    printf("走行距離："); scanf("%d", &m);
    printf("A社, B社 (A：1, B：2) ："); scanf("%d", &sel);
    putchar('\n');
    ms(m, sel);
}

int calc(int dist, int sel) {
    switch (sel) {
        case 1:
            if (dist > 1200) {
                return 600 + ((dist - 901) / 300) * 100;
            } else {
                return 600;
            }

            break;
        case 2:
            if (dist > 1000) {
                return 400 + ((dist - 801) / 200) * 100;
            } else {
                return 400;
            }
            
            break;
    }
}

int ms(int dist, int sel) {
    int flag = 0;
    int co[3];
    for (int i = 1; i <= 2; i++) {
        switch (i) {
            case 1:
                co[i] = calc(dist, 1);

                break;
            case 2:
                co[i] = calc(dist, 2);

                break;
        }
    }

    switch (sel) {
        case 1:
            printf("A社：%d円\n", co[1]);
            break;
        case 2:
            printf("B社：%d円\n", co[2]);
            break;

        default:
            printf("正しくない値です");
            return -1;
    } 

    int i = 999;
    printf("\n走行距離ごとの運賃比較表\n");
    while (1) {
        i += 1;

        co[1] = calc(i, 1);
        co[2] = calc(i, 2);

        if (flag == 0 && co[1] < co[2]) {
            co[0] = i;
            flag = 1;
        }
        
        if (!(i % 200)) printf("%dm | A社：%5d円  B社：%5d円\n", i, co[1], co[2]);

        if (i >= 3000) break;
    }

    putchar('\n');

    switch (sel) {
        case 1:
            printf("%dmからA社の運賃のほうが安くなります。\n", co[0]);
            break;
        case 2:
            printf("%dmからB社の運賃のほうが高くなります。\n", co[0]);
            break;
    }
}
