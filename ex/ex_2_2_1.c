/*
 * 課題: 2つの整数へのポインタを受け取り、小さい方の値へ10を加える関数を作る
 * 期待される動作:
 *   leftが30、rightが50の場合、関数呼び出し後にleftが40、rightが50となる
 * 出力例:
 *   left: 40, right: 50
 * 完成のためのポイント:
 *   - ポインタがNULLでないことを確認してから間接参照すること
 *   - *leftと*rightを比較すること
 */
#include <stddef.h>
#include <stdio.h>

void add_to_smaller(int *left, int *right)
{
    /* NULL確認後、小さい方の指す値へ10を加える */
    // --- ここから記述 ---
    if (left == NULL || right == NULL) {
        return; // ポインタがNULLの場合は何もしない
    }
    if (*left < *right) {
        *left += 10;
    } else {
        *right += 10;
    }
}

int main(void)
{
    int left = 30;
    int right = 50;

    add_to_smaller(&left, &right);
    printf("left: %d, right: %d\\n", left, right);
    return 0;
}