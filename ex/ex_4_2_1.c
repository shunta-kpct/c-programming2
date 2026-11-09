/*
 * 課題: 入力されたメニュー名を1文字ずつ比較し、一致判定を行う関数を作る
 * 期待される動作:
 *   strings_equalは2つの文字列が完全一致なら1、不一致なら0を返す
 *   メニューを表示して入力し、curryと一致するか表示する
 *   curr、currys、Curryはcurryと一致しない
 * 出力例:
 *   Menu name: curry
 *   Input: curry
 *   Match: curry
 *   入力は30文字以内でEnterまで正常に行われるものとする
 * 完成のためのポイント:
 *   - 比較前に入力末尾の改行を終端文字へ置き換えること
 *   - const char *leftとconst char *rightを引数にすること
 *   - strings_equal関数では1文字ずつ比較し、違いがあれば0を返すこと
 *   - 両方の文字列が同じ位置で終端に達した場合だけ一致とすること
 *   - strcmpなどの文字列比較関数は使わないこと
 */

#include <stdio.h>

int strings_equal(const char *left, const char *right)
{
    // 1文字ずつ比較する
    while (*left != '\0' && *right != '\0')
    {
        if (*left != *right)
        {
            return 0;
        }

        left++;
        right++;
    }

    // 両方が同じ位置で終端なら一致
    if (*left == '\0' && *right == '\0')
    {
        return 1;
    }

    return 0;
}

int main(void)
{
    const char menus[][16] = {"curry", "ramen", "udon"};
    int menu_count = (int)(sizeof(menus) / sizeof(menus[0]));
    char input[32] = "";

    puts("=== Cafeteria Ticket Machine ===");
    for (int i = 0; i < menu_count; i++)
    {
        printf("%d: %s\n", i + 1, menus[i]);
    }

    printf("Menu name: ");
    fgets(input, sizeof(input), stdin);

  // --- ここから記述 ---

    for (int i = 0; input[i] != '\0'; i++)
    {
        //
        if (input[i] == '\n')
        {
            input[i] = '\0';
            break;
        }
    }
  // --- ここまで記述 ---
    printf("Input: %s\n", input);

    if (strings_equal(input, menus[0]))
    {
        puts("Match: curry");
    }
    else
    {
        puts("Not matched.");
    }

    return 0;
}
