#include <stdio.h>
// #include <string.h>

int paaa(int num) {
    int test;
    test = num * 15;

    return test;
}

int main(void) {
    /*char test[] = "test";

    if (strcmp(test, "test") == 0)
        puts("はげ");

    printf("%s", test);*/
    int test = paaa(20);

    printf("%d", test);
}
