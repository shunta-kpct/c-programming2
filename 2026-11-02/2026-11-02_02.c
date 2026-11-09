#include<stdio.h>

void func(int *p,int p_size){
    p[0]=98;
    p[1]=99;
    p[2]=100;
}

int main(void){
    int scores[]={10,20,30};

    int size = sizeof(scores)/sizeof(scores[0]);
    func(scores,size);

    for(int i=0;i<3;i++){
        printf("scores[%d]: %d\n", i,scores[i]);
    }

    return 0;
}