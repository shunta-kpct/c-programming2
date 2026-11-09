/*
 * 課題: 関数ポインタを引数として受け取り、あいさつ関数を呼び出すexecute関数を作る
 * 期待される動作:
 *   execute(greet)でこんにちは、execute(goodbye)でさようならと表示される
 * 出力例:
 *   こんにちは
 *   さようなら
 * 完成のためのポイント:
 *   - void (*action)(void)を関数ポインタの型として使うこと
 *   - actionがNULLでないことを確認してから呼び出すこと
 */
#include <stddef.h>
#include <stdio.h>

void greet(void)
{
    printf("こんにちは\n");
}

void goodbye(void)
{
    printf("さようなら\n");
}

void execute(void (*action)(void))
{
    /* actionがNULLでなければ関数を呼び出す */
    // --- ここから記述 ---
    if(action == NULL){
        return;
    }
    (*action)();

}

int main(void)
{
    execute(greet);
    execute(goodbye);
    return 0;
}