#include <stdio.h>

#define N 6
#define SUBJ 2

int main(void) {
    int score[SUBJ][N];
    int sum_s[SUBJ] = {0};
    int sum_p[N] = {0};
    double avg_s[SUBJ] = {0};
    int tmp = 0;


    for (int i = 0; i < SUBJ; i++) {
        switch (i) {
            case 0:
                puts("> 国語");
                break;
            case 1:
                puts("> 数学");
                break;
        }

        for (int j = 0; j < N; j++) {
            printf("%d人目：", j + 1);
            scanf("%d", &score[i][j]);
        }
    }

    for (int i = 0; i < SUBJ; i++) {
        for (int j = 0; j < N; j++) {
            tmp += score[i][j];
            sum_s[i] += score[i][j];
        }
        
        avg_s[i] = tmp / N;
    
        tmp = 0;
    }

    puts("\n\n===== 国語 =====");
    printf("合計点：%d\n", sum_s[0]);
    printf("平均点：%.1f\n\n", avg_s[0]);
    
    puts("===== 数学 =====");
    printf("合計点：%d\n", sum_s[1]);
    printf("平均点：%.1f\n\n", avg_s[1]);

    printf("=== %d人のそれぞれの合計 ===\n", N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < SUBJ; j++) {
            sum_p[i] += score[j][i];
        }

        printf("%d人目 = %d\n", i + 1, sum_p[i]);
    }

    return 0;
}
