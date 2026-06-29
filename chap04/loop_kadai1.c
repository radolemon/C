#include <stdio.h>

int main(void)
{
    int box;

    while(box < 1 || box > 3){
        printf("宝箱が3つある。どれを開けますか？(1 or 2 or 3):");
        scanf("%d", &box);
        if(1 <= box || 3 <= box) break;
    }
    if(box == 1){
        puts("宝箱は罠だった！眠りガスが噴き出した！");
    } 
    else if(box == 2){
        puts("宝箱には10000Gが入っていた!");
    }
    else{
        puts("宝箱は罠だった！毒ガスが噴き出した！");
    }
    return 0;
}