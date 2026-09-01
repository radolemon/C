#include <stdio.h>
#define N 7

int search_idx(const int [], int idx[], int key, int n);

int main(void) {
    int a[N] = {1, 7, 5, 7, 2, 4, 7};
    int idx[N];
    int key;
    
    puts("検索する値を入力してください。\n");
    printf("整数："); scanf("%d", &key);

    int num = search_idx(a, idx, key, N);

    printf("key: %dの値がある要素数は", key);
    for (int i = 0; i < num; i++) {
        printf(" %d", idx[i]);
    }

    printf(" の%dつです。", num);

    return 0;
}

int search_idx(const int v[], int idx[], int key, int n) {
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (key == v[i]) {
            idx[cnt] = i;
            cnt += 1;
        }
    }

    return cnt;
}
