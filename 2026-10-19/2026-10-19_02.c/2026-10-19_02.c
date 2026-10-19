#include <stdio.h>

int func(int *p, int *q) {
    if(*p<0||*q<0){
        printf("Error: Negative value are not allowed.\n");
        return -1;
    }
    *p = 100;
    *q = 200;
    printf("The value pointed to by p is: %d\n", *p);
    printf("The value pointed to by q is: %d\n", *q);
}

int main(void){
    int i=5;
    int j=10;

    printf("The value of i is: %d\n", i);
    printf("The value of j is: %d\n", j);
    if(func(&i, &j) == -1){
        return -1;
    }
    printf("The value of i after func is: %d\n", i);
    printf("The value of j after func is: %d\n", j);
    return 0;
}