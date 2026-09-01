#include <stdio.h>
#define N 5

void swap_array(int [], int []);

int main(void) {
    int fa[N] = {3, 8, 1, 9, 4}, 
        fb[N] = {9, 1, 7, 6, 5};
        
    int flag = 0;
    puts("元のデータ");
    
    for (int i = 0; i < 2; i++) {
        if (flag == 0) printf("fa: ");
        else printf("fb: ");

        for (int j = 0; j < N; j++) {
            if (flag == 0) printf("%d ", fa[j]);
            else printf("%d ", fb[j]);
        }

        putchar('\n');

        flag++;
    }

    swap_array(fa, fb);
    
    flag = 0;
    puts("返還後のデータ");
    
    for (int i = 0; i < 2; i++) {
        if (flag == 0) printf("fa: ");
        else printf("fb: ");

        for (int j = 0; j < N; j++) {
            if (flag == 0) printf("%d ", fa[j]);
            else printf("%d ", fb[j]);
        }

        putchar('\n');

        flag++;
    }
}

void swap_array(int xa[], int xb[]) {
    int tmp = 0;

    for (int i = 0; i < N; i++) {
        tmp = xa[i];
        xa[i] = xb[i];
        xb[i] = tmp;
    }
}
