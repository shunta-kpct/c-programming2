/*
 * 課題: ポインタ引数を使うswap関数を完成させ、2つの値を昇順に表示する
 * 期待される動作:
 *   firstが34、secondが12の場合、表示はfirst: 12, second: 34となる
 * 出力例:
 *   first: 12, second: 34
 * 完成のためのポイント:
 *   - 交換前の一方の値をtempへ保存すること
 *   - swapを呼び出すときは&firstと&secondを渡すこと
 */
#include <stddef.h>
#include <stdio.h>

void swap(int *left, int *right)
{
    /* NULL確認後、*leftと*rightを交換する */
    // --- ここから記述 ---
    if (left == NULL || right == NULL) {
        return; // ポインタがNULLの場合は何もしない
    }
    int temp = *left;
    *left = *right;
    *right = temp;
}

int main(void)
{
    int first = 34;
    int second = 12;

    /* firstがsecondより大きいときだけswapを呼び出す */
    // --- ここから記述 ---
    if (first > second) {
        swap(&first, &second);
    }
    printf("first: %d, second: %d\n", first, second);
    return 0;
}