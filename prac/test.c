#include <stdio.h>

int main(void) {
    int n, cnt, num, tmp;

    scanf("%d", &n);
    num = 0;
    tmp = n;

    if (n % 2 != 0)
        num = tmp; 

    for (cnt = 2; cnt <= n; cnt+=2) {
        if (n % 2 == 0) {
            num = num + cnt;
        } else {
            tmp = n - cnt;
            num = num + tmp;

            printf("\n%d", tmp);

            printf("\n%d\n\n", num);
        }
        
        /*printf("\n%d", num);*/
    }

    printf("\n%d", num);

    return 0;
}
