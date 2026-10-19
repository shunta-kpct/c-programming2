/*
 * 課題: 変数の値、アドレス、ポインタが指す値を表示する
 * 期待される動作:
 *   numberのアドレスとpointerが持つアドレスが同じものとして表示される
 *   *pointerを90へ更新した後、numberも90として表示される
 * 出力例:
 *   numberの値: 75
 *   numberのアドレス: 0xffffffffed44
 *   pointerが持つアドレス: 0xffffffffed44
 *   pointerが指す値: 75
 *   更新後のnumber: 90
 * 完成のためのポイント:
 *   - pointerをnumberのアドレスで初期化すること
 *   - アドレスの表示には%pと(void *)を使うこと
 */
#include <stdio.h>

int main(void)
{
    int number = 75;
    int *pointer;

    /* pointerの初期化、値とアドレスの表示、*pointerによる更新を記述する */
    // --- ここから記述 ---
    
    printf("numberの値: %d\n", number);
    printf("numberのアドレス: %p\n", &number);
    pointer = &number;
    printf("pointerが持つアドレス: %p\n", pointer);
    printf("pointerが指す値: %d\n", *pointer);

    *pointer = 90;
    printf("更新後のnumber: %d\n", number);
    return 0;
}

