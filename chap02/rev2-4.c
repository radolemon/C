#include<stdio.h>
int main(void)
{
    int n1,n2;
    printf("指数を２つ入力:"); scanf("%d%d",&n1,&n2);
    printf("%d+%d=%d\n",n1,n2,n1+n2);
    printf("%d/%d=%f\n",n1,n2,((double)n1/n2));
    return 0;
}