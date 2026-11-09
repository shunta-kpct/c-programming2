/*
 * 課題: 関数ポインタの配列を使い、2倍、3倍、2乗の計算結果を順に表示する
 * 期待される動作:
 *   入力値が4の場合、8、12、16がこの順に表示される
 * 出力例:
 *   8
 *   12
 *   16
 * 完成のためのポイント:
 *   - 戻り値int、引数intの関数ポインタ配列を宣言すること
 *   - 配列の要素数だけ繰り返して各関数を呼び出すこと
 */
#include <stdio.h>

int double_value(int value)
{
    return value * 2;
}

int triple_value(int value)
{
    return value * 3;
}

int square_value(int value)
{
    return value * value;
}

int main(void)
{
    int value = 4;
    int index;

    /* 関数ポインタ配列を作成し、各計算結果を表示する */
    // --- ここから記述 ---
     int (*pF[])(int)={double_value, triple_value,square_value};
     for(int i=0;i<3;i++){
         int result;
         result=pF[i](value);
         printf("%d\n",result);
     }
    //     int (*func_ptrs[])(int) = {double_value, triple_value, square_value};
    // for(index = 0; index < 3; index++){
    //     printf("%d\n", (*func_ptrs[index])(value));
    // }

    return 0;
}