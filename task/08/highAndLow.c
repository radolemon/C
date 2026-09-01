#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 13
#define MAX_MONEY 1000

int input(int, int, char []);
int check_guess(int, int []);

int main(void) {
    srand((unsigned int)time(NULL));

    int card[2],
        cnt = 1,
        bet,
        check,
        winnings = 0,
        money = 100,
        odds = 1,
        guess = 1;

    do {
        card[0] = rand() % MAX_NUM + 1;
        
        puts("\n\n最初のカードです。");
        printf("|%d|\n", card[0]);

        bet = input(1, 100, "いくら賭けますか？(1G ~ 100G): ");

        printf("\n【%d回目】", cnt);
        guess = input(0, 1, "次のカードは？ (High：1、Low：0): ");

        puts("カードをめくります。");
        check = check_guess(guess, card);
        printf("|%d|\n", card[1]);

        if (odds <= 1) odds++;
        else odds += 2;

        if (check == 1) {
            winnings = bet * odds;
            money += winnings;
            printf("あなたの勝ち。所持金は%dGです。\n", money);

            if (money > MAX_MONEY) {
                printf("おめでとう！あなたは大金持ちです。");
                break;
            }

            printf("倍率は%d倍。", odds);
            check = input(0, 1, "続けますか？ (はい: 1、 いいえ: 0): ");
        } else {
            money -= bet;
            printf("あなたの負け。所持金は%dGです。\n", money);

            odds = 1;

            if (money <= 0) {
                puts("もう、所持金がなくなりました。");
                break;
            }

            check = input(0, 1, "続けますか？ (はい: 1、 いいえ: 0): ");
        }

        cnt++;
    } while(1);

    return 0;
}

int input(int min, int max, char msg[]) {
    int n;

    do {
        printf("%s", msg);
        scanf("%d", &n);
    } while(n < min || n > max);
}

int check_guess(int guess, int card[]) {
    card[1] = rand() % MAX_NUM + 1;

    switch(guess) {
        case 1:
            if (card[0] < card[1]) return 1;
            return 0;
            break;

        case 0:
            if (card[0] > card[1]) return 1;
            return 0;
            break;
        
    }
}
