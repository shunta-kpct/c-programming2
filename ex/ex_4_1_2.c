/*
 * 課題: 食堂のメニューを表示し、fgetsでメニュー名を入力して表示する
 * 期待される動作:
 *   IDが1のcurry、2のramen、3のudonを表示する
 *   fgetsでメニュー名を受け取り、改行を含めて入力文字列を表示する
 *   空白はそのまま残し、空行も入力として表示する
 *   入力は30文字以内とし、最後にEnterを入力する
 * 出力例:
 *   === Cafeteria Ticket Machine ===
 *   1: curry
 *   2: ramen
 *   3: udon
 *   Menu name: ramen
 *   Input: ramen
 * 完成のためのポイント:
 *   - main内で自分でfgetsを呼び出すこと
 *   - 読み込んだ改行も文字列に残ることを確認すること
 *   - 比較とメニュー検索はまだ実装しないこと
 */
#include <stdio.h>

int main(void)
{
    const char menus[][16] = {"curry", "ramen", "udon"};
    int menu_count = (int)(sizeof(menus) / sizeof(menus[0]));
    char input[32] = "";

    // --- ここから記述 ---

    printf("=== Cafeteria Ticket Machine ===\n");

    for (int i = 0; i < menu_count; i++) {
        printf("%d: %s\n", i + 1, menus[i]);
    }

    printf("Menu name: ");
    fgets(input, sizeof(input), stdin);

    printf("Input: %s", input);

    return 0;
}