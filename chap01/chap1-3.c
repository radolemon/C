#include <stdio.h>

int main(void)
{int n1,n2;//ここはnじゃなくてもpayやpriceで代用可能
    
    printf("商品の値段の値段を入力してください",n1); scanf("%d",&n1);
    printf("いくら払いますか？",n2); scanf("%d",&n2);

    printf("お釣りは%d円です\n",n2-n1);//和を表示
    printf("千円札は%d枚です\n",(n2-n1)%1000);
    return 0;
}