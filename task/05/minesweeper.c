#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define X 9
#define Y 9
#define BOM 78 // 爆弾の個数

int main(void)
{
    srand((unsigned int)time(NULL));

    // +2 ダミースペース
    int map[X + 2][Y + 2];
    int x, y;        // マップ表示用
    int counter = 0; // マップの選択数
    int bomb;        // 選択された周囲８マスの爆弾の個数
    int xx, yy;      // 入力座標データー
    int cnt = 0;

    // マップの初期化
    for (int y = 0; y < Y + 2; y++)
        for (int x = 0; x < X + 2; x++)
            map[y][x] = -1;

    // 爆弾のセット
    while (cnt != BOM)
    {
        x = rand() % X + 1;
        y = rand() % Y + 1;

        if (map[y][x] != -2)
        {
            map[y][x] = -2;
            cnt++;
            // printf("x %d, y %d\n", x, y);
        }
    }

    while (1)
    {
        // マップ表示
        printf("\n  ");
        for (x = 1; x <= X; x++)
        {
            printf("%2d", x);
        }
        putchar('\n');

        printf(" +");
        for (x = 1; x <= X; x++)
        {
            printf("--");
        }
        printf("-+\n");

        for (y = 1; y <= Y; y++)
        {
            printf("%d| ", y);
            for (x = 1; x <= X; x++)
            {
                if (map[y][x] >= 0)
                    printf("%d ", map[y][x]);
                else
                    printf("  ");
            }

            printf("|\n");
        }

        printf(" +");
        for (x = 1; x <= X; x++)
        {
            printf("--");
        }
        printf("-+\n");

        // 入力
        counter++;

        if (counter == (X * Y) + 1 - BOM)
        {

            printf("\n\n  ");
            for (x = 1; x <= X; x++)
            {
                printf("%2d", x);
            }
            putchar('\n');

            printf(" +");
            for (x = 1; x <= X; x++)
            {
                printf("--");
            }
            printf("-+\n");

            for (y = 1; y <= Y; y++)
            {
                printf("%d| ", y);
                for (x = 1; x <= X; x++)
                {
                    if (map[y][x] >= -1)
                        printf("%d ", 0);
                    else
                        printf("%d ", 1);
                }

                printf("|\n");
            }

            printf(" +");
            for (x = 1; x <= X; x++)
            {
                printf("--");
            }

            printf("-+\n");

            puts("=== ゲームクリア ===");

            return 0;
        }

        while (1)
        {
            printf("座標を入力してください(x y) [%d回目]: ", counter);
            scanf("%d %d", &xx, &yy);

            if (xx + yy == 0)
            {
                printf("\n\n  ");
                for (x = 1; x <= X; x++)
                {
                    printf("%2d", x);
                }
                putchar('\n');

                printf(" +");
                for (x = 1; x <= X; x++)
                {
                    printf("--");
                }
                printf("-+\n");

                for (y = 1; y <= Y; y++)
                {
                    printf("%d| ", y);
                    for (x = 1; x <= X; x++)
                    {
                        if (map[y][x] >= -1)
                            printf("%d ", 0);
                        else
                            printf("%d ", 1);
                    }

                    printf("|\n");
                }

                printf(" +");
                for (x = 1; x <= X; x++)
                {
                    printf("--");
                }

                printf("-+\n");
            }
            // x,y 座標が1~3の間かどうかチェック
            if (!(xx >= 1 && xx <= X) || !(yy >= 1 && yy <= Y))
            {
                puts("マップの範囲外の場所が入力されました。");
                continue;
            }

            if (map[yy][xx] < 0)
                break;
            puts("|!| その場所はすでに開いています");
        }

        // 爆弾を引いた
        if (map[yy][xx] == -2)
        {
            printf("\n\n  ");
            for (x = 1; x <= X; x++)
            {
                printf("%2d", x);
            }
            putchar('\n');

            printf(" +");
            for (x = 1; x <= X; x++)
            {
                printf("--");
            }
            printf("-+\n");

            for (y = 1; y <= Y; y++)
            {
                printf("%d| ", y);
                for (x = 1; x <= X; x++)
                {
                    if (map[y][x] >= -1)
                        printf("%d ", 0);
                    else
                        printf("%d ", 1);
                }

                printf("|\n");
            }

            printf(" +");
            for (x = 1; x <= X; x++)
            {
                printf("--");
            }

            printf("-+\n");

            puts("爆弾が爆発しました！");

            break; // ゲーム終了
        }

        // プレイヤーが選択した場所周囲８マスの爆弾を数える
        bomb = 0;
        for (int dy = -1; dy <= 1; dy++)
        {
            for (int dx = -1; dx <= 1; dx++)
            {
                if (dx == 0 && dy == 0)
                    continue; // 指定した場所はカウントしない

                if (map[yy + dy][xx + dx] == -2)
                    bomb++;
            }
        }

        map[yy][xx] = bomb; // 入力座標周囲の爆弾個数を代入
    }

    return 0;
}
