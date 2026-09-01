#include <stdio.h>

int main(void) {
    int cnt[6] = {0};
    int hyoka;

    do {
        printf("評定（１～５）を入力：");
        scanf("%d", &hyoka);

        if (hyoka >= 1 && hyoka <= 5) {cnt[hyoka]++; cnt[0]++;} 
    } while (hyoka != -1);

    for (hyoka = 1; hyoka <= 5; hyoka++) {
        printf("評定%dの人数: %d人\n", hyoka, cnt[hyoka]);
    }

    printf("合計人数：%d人\n", cnt[0]);

    return 0;
}
