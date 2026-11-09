/*
 * 課題: 配列と要素数を受け取り、配列内の最大値を返す関数を作る
 * 期待される動作:
 *   {65, 92, 78, 88}を渡した場合、最大値: 92と表示される
 * 出力例:
 *   最大値: 92
 * 完成のためのポイント:
 *   - 要素数が1以上であることを確認すること
 *   - 先頭要素を最大値の初期値とし、添字またはポインタで残りを比較すること
 */
#include <stddef.h>
#include <stdio.h>

int max_value(const int values[], int count)
{
    int index;
    int maximum;

    /* 不正な引数では0を返し、それ以外では最大値を返す */
    // --- ここから記述 ---
    if(values == NULL || count <= 0){
        printf("引数が不正です。\n");
        return 0;
    }

    maximum = values[0];
    for(int i=1;i<count;i++){
        if(values[i] > maximum){
            maximum = values[i];
        }
    }

    return maximum;
}

int main(void)
{
    int scores[] = {65, 92, 78, 88};
    int count = (int)(sizeof(scores) / sizeof(scores[0]));

    printf("最大値: %d\\n", max_value(scores, count));
    return 0;
}
