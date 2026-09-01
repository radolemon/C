#include <stdio.h>

int main(void) {
    int n1, n2;
    
    n1 = 1234;
    n2 = n1 % 5;

    printf("%d ÷ %d の余りは %d です。", n1, 5, n2);

    return 0;
}
