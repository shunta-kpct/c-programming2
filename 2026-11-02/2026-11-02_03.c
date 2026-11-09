#include<stdio.h>

void func(int a){
    printf("func関数が呼び出されました。引数の値は%d\n",a);
}
void func2(int b){
    printf("func2関数が呼び出されました。引数の値は%d\n",b*b);
}

int main(void){
    void (*pF)(int) = func;

    (*pF)(100);

    pF = func2;
    (*pF)(100);
    
    return 0;
}