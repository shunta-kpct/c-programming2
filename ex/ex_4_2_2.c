
/*
 * 課題: strcmpで入力されたメニュー名を検索し、メニューIDを返す関数を作る
 * 期待される動作:
 *   find_menu_idは一致したメニューのID（添字+1）を返し、一致なしは-1を返す
 *   curryは1、ramenは2、udonは3とする
 *   同名が複数ある場合は最初のIDを返し、大文字と小文字は区別する
 * 出力例:
 *   Menu name: ramen
 *   Input: ramen
 *   Menu ID: 2
 *   入力は30文字以内でEnterまで正常に行われるものとする
 * 完成のためのポイント:
 *   - 比較前に入力末尾の改行を終端文字へ置き換えること
 *   - string.hをインクルードし、strcmpの戻り値が0か判定すること
 *   - 文字列の配列と行数、入力文字列を引数で受け取ること
 *   - 見つからなかった場合は繰り返しの後で-1を返すこと
 */

#include <stdio.h>
#include <string.h>

int find_menu_id(const char menus[][16], int menu_count, const char *input)
{
    /* 各メニューと入力をstrcmpで比較し、一致したIDを返す */
    for (int i = 0; i < menu_count; i++)
    {
        if (strcmp(menus[i], input) == 0)
        {
            return i + 1;
        }
    }

    return -1;
}

int main(void)
{
    const char menus[][16] = {"curry", "ramen", "udon"};
    int menu_count = (int)(sizeof(menus) / sizeof(menus[0]));
    char input[32] = "";

    printf("=== Cafeteria Ticket Machine ===\n");
    for (int i = 0; i < menu_count; i++)
    {
        printf("%d: %s\n", i + 1, menus[i]);
    }

    printf("Menu name: ");
    fgets(input, sizeof(input), stdin);

    /* 末尾の改行を終端文字へ置き換える */
    input[strcspn(input, "\n")] = '\0';

    printf("Input: %s\n", input);
    int menu_id = find_menu_id(menus, menu_count, input);

    if (menu_id == -1)
    {
        puts("Not found.");
    }
    else
    {
        printf("Menu ID: %d\n", menu_id);
    }

    return 0;
}
