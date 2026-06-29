#include <stdio.h>

int main(void)
{
    puts("整数値によって出す手を変えます（終了は-1。");
    int sum = 0;
    int gu = 0, cho = 0, pa = 0;
    while (1){
        int no;

        printf("じゃんけん[グー:0,チョキ:1,パー:2]:");
        scanf("%d", &no);
        if (no == -1)
            break;
        switch(no){
            case 0:puts("グー"); gu++; break;
            case 1:puts("チョキ"); cho++; break;
            case 2:puts("パー"); pa++; break;
        }
    }
    printf("グーは%d回", gu);
    printf("チョキは%d回", cho);
    printf("パーは%d回", pa);
}