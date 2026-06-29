#include <stdio.h>

#define N 6

int main(void) {
    double weight[N], limit, cnt = 0, sum = 0;
    
    for (int i = 0; i < N; i++) {
        printf("%d人目の体重 = ", i + 1);
        scanf("%lf", &weight[i]);
    }

    printf("上限値 = ");
    scanf("%lf", &limit);

    printf("%.0fkg以下のデータを表示します\n", limit);
    for (int i = 0; i < N; i++) {
        if (weight[i] <= limit) {
            printf("%d人目：%0.1fkg\n", i + 1, weight[i]);
            
            sum+=weight[i];
            cnt++;
        }
    }

    printf("%.0f人の平均体重：%0.1fkg", cnt, sum / cnt);

    return 0;
}
