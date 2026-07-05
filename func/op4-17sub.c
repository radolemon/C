#include <stdio.h>
int input_num(void);
void output_log(int);

int main(void) {
    int n = input_num();
    output_log(n);

    return 0;
}

int input_num(void) {
    int n;

    do {
        printf("nの値；");
        scanf("%d", &n);

        if (n < 1) printf("<!> 1より大きい値を入力してください。\n");
    } while(n < 1);

    return n;
}

void output_log(int num) {
    for(int i = 1; i <= num; i++) {
        printf("%dの2乗は%d\n", num, i*i);
    }
}
