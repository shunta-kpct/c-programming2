
/*
 * 課題: ポインタの参照先をfirstからsecondへ切り替え、それぞれの値を更新する
 * 期待される動作:
 *   firstを10、secondを20で開始し、最終的にfirstを11、secondを22として表示する
 * 出力例:
 *   first: 11
 *   second: 22
 * 完成のためのポイント:
 *   - pointer = &firstとpointer = &secondを順に使うこと
 *   - *pointerへの代入が現在の参照先だけを更新することを確認すること
 */
#include <stdio.h>

int main(void)
{
    int first = 10;
    int second = 20;
    int *pointer;

    /* firstを1増やし、secondを2増やして表示する */
    // --- ここから記述 ---
    pointer = &first;
    *pointer += 1;
    pointer = &second;
    *pointer += 2;
    printf("first: %d\n", first);
    printf("second: %d\n", second);
    return 0;
}