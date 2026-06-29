#include <stdio.h>

int main(void)
{
    int a;

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            if(j == i || j == 6 - i)
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
}