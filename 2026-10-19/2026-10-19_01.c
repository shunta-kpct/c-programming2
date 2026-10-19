#include <stdio.h>

int main(){
    int score=80;
    int *p;
    int *p=&score;
    p=&score;

    printf("scor: %d\n",score);
    printf("&score: %p\n",(void*)&score);
    printf("p: %p\n",(void*)p);
    printf("*p: %d\n",*p);

    return 0;
}