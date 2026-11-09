/*
 * 課題: 食堂の券売機で、scanfの%sを使ってメニュー名を入力し、文字列と文字数を表示する
 * 期待される動作:
 *   scanf("%s", str)でメニュー名を文字列として受け取る
 *   入力された文字列と、終端文字を除いた文字数を表示する
 *   入力は空白を含まない30文字以内の単語とし、正常に行われるものとする
 * 出力例:
 *   Menu name: curry
 *   Input: curry
 *   Count: 5
 * 完成のためのポイント:
 *   - 配列名strをそのまま渡し、&strとは書かないこと
 *   - %sが終端文字を自動的に付けることを確認すること
 *   - 入力後に終端文字まで走査して文字数を数えること
 *   - fgetsとstrlenは使わず、入力後のチェック処理は実装しないこと
 */
#include <stdio.h>

int main(void){
    char menu_name[31];
    char c;
    printf("Menu name: ");
    scanf("%30s", menu_name);
    while((c = getchar()) != '\n' && c != EOF) ;

    printf("Input: %s\n", menu_name);

    int count = 0;
    while(menu_name[count] != '\0') {
        count++;
    }
    printf("Count: %d\n", count);

    return 0;
}
