#include <stdio.h>

void plus1(int *);

int main(void) {
    int num = 10;
    
    plus1(&num);
    printf("numの値: %d\n", num);
    
    return 0;
}

void plus1(int *a) {
    *a += 1;
}
