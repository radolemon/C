#include <stdio.h>

int main(void)
{
    int n = 1;
    while(n <= 6){
        printf("*");
        if(n==1 || n==3) printf("\n");
        n++;
    }
    return 0;
}