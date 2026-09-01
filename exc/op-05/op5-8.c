#include <stdio.h>

#define N 15

int main(void) {
    int num, height = 0;
    int score[N];
    int dist[11] = {0};

    printf("人数を入力せよ：");

    do {
        scanf("%d", &num);
        if (num < 1 || num > N)
            printf("\a1~%dで入力せよ：", N);
    } while (num < 1 || num > N);

    printf("%d人の点数を入力せよ。\n", num);

    for (int i = 0; i < num; i++) {
        printf("%2d番目：", i + 1);
        do {
            scanf("%d", &score[i]);
            if (score[i] < 0 || score[i] > 100)
                printf("\a0~100で入力せよ：");
        } while(score[i] < 0 || score[i] > 100);

        dist[score[i] / 10]++; 
    }
    
    puts("\n-----分布グラフ-----\n");

    for (int i = 0; i < 11; i++) {
        if (height < dist[i]) {height = dist[i];}
    }

    putchar('\n');

    for (int i = 0; i < height; i++) {
        for(int j = 0; j < 11; j++) {
            if (dist[j] >= height - i) {
                printf("  *");
            } else {
                printf("   ");
            }
        }

        putchar('\n');
    }

    puts(" ----------------------------------");
    puts("  0 10 20 30 40 50 60 70 80 90 100");

    return 0;
}
