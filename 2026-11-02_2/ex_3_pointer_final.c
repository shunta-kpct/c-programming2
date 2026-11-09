/*
 * 課題内容:
 *   main 関数を含むプログラム全体を一から実装してください。
 *   A: int 型のポインタを通じて、value を 10 から 15 に変更してください。
 *   B: 配列 {30, 10, 40, 20} の先頭要素と末尾要素を交換してください。
 *   C: 出力引数 sum と maximum を使い、配列の合計と最大値を求めてください。
 *   D: 関数ポインタを通じて、全要素に add_five を適用してください。
 *   E: 変換後の配列を再集計し、合計と最大値を表示してください。
 * 出力例（通常の場合、表示ラベルは実装に合わせて英語表記）:
 *   value: 15
 *   swapped: 20 10 40 30
 *   sum: 100, max: 40
 *   mapped: 25 15 45 35
 *   sum: 120, max: 45
 * 必須の関数宣言:
 *   void swap(int *left, int *right);
 *   void summarize(const int *values, int count, int *sum, int *maximum);
 *   void apply(int *values, int count, int (*operation)(int));
 *   int add_five(int value);
 * 制約条件:
 *   summarize と apply はポインタで走査し、間接参照の前に引数を検査してください。
 *   summarize は、引数が NULL または count が 0 以下なら何もしません。
 *   apply は values または operation が NULL、または count が 0 以下なら何もしません。
 *   swap はどちらかの引数が NULL なら何もしません。
 *   要素数は実際の配列長以下とし、ポインタは有効な領域を指すものとします。
 *   合計と最大値の出力先には、配列外の互いに異なる変数を指定してください。
 */

/* 以下に、すべての関数と main 関数を実装してください。 */

#include <stdio.h>

void swap(int *left, int *right)
{
    if (left == NULL || right == NULL) {
        return;
    }

    int temp = *left;
    *left = *right;
    *right = temp;
}

void summarize(const int *values, int count, int *sum, int *maximum)
{
    if (values == NULL || count <= 0 || sum == NULL || maximum == NULL) {
        return;
    }

    *sum = 0;
    *maximum = *values;

    for (const int *p = values; p < values + count; p++) {
        *sum += *p;

        if (*p > *maximum) {
            *maximum = *p;
        }
    }
}

void apply(int *values, int count, int (*operation)(int))
{
    if (values == NULL || operation == NULL || count <= 0) {
        return;
    }

    for (int *p = values; p < values + count; p++) {
        *p = operation(*p);
    }
}

int add_five(int value)
{
    return value + 5;
}

int main(void)
{
    // A
    int value = 10;
    int *p = &value;
    *p = 15;

    printf("value: %d\n", value);

    // B
    int numbers[] = {30, 10, 40, 20};
    int count = sizeof(numbers) / sizeof(numbers[0]);

    swap(&numbers[0], &numbers[count - 1]);

    printf("swapped: ");
    for (int *p = numbers; p < numbers + count; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    // C
    int sum;
    int maximum;

    summarize(numbers, count, &sum, &maximum);

    printf("sum: %d, max: %d\n", sum, maximum);

    // D
    apply(numbers, count, add_five);

    printf("mapped: ");
    for (int *p = numbers; p < numbers + count; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    // E
    summarize(numbers, count, &sum, &maximum);

    printf("sum: %d, max: %d\n", sum, maximum);

    return 0;
}
