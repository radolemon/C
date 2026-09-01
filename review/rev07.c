#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("男子学生数: "); scanf("%d", &n1);
    printf("女子学生数: "); scanf("%d", &n2);
    printf("全学生数: %d\n", n1 + n2);
    printf("女子学生割合: %.2f", (double)n2 / (n1 + n2) * 100);

    return 0;
}
