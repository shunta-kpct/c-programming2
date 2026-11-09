#include<stdio.h>

int main(){
    int scores[]={10,20,30};
    int *p =scores;

    printf("%d %d %d\n",scores[0],p[0],*p);

    p++;
    printf("%d %d %d\n",scores[0],p[0],*p);
    
    (*p)++;
    printf("%d %d %d\n",scores[1],p[0],*p);

    return 0;
}