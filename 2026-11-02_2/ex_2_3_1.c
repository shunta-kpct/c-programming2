/*
 * 課題: ポインタ演算を使い、配列の全要素の合計を求める関数を作る
 * 期待される動作:
 *   {10, 20, 30, 40}を渡した場合、合計: 100と表示される
 * 出力例:
 *   合計: 100
 * 完成のためのポイント:
 *   - values + countを終端位置として使うこと
 *   - pointer < endの間だけ*pointerを参照すること
 */
#include <stddef.h>
#include <stdio.h>

int sum_values(const int values[], int count)
{
    const int *pointer;
    const int *end;
    int sum = 0;

    /* NULLとcountを確認後、ポインタ演算で合計を求める */
    // --- ここから記述 ---
    if(values == NULL){
        printf("引数valuesが空っぽです。\n");
        return 0;
    }

    pointer = values;
    end = values + count;

    while(pointer < end)
    {
        sum += *pointer;
        pointer++;
    }
    return sum;
}

int main(void)
{
    int values[] = {10, 20, 30, 40};
    int count = (int)(sizeof(values) / sizeof(values[0]));

    printf("合計: %d\\n", sum_values(values, count));
    return 0;
}