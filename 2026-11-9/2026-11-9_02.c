#include<stdio.h>

void func(char *s){
    for(int i=0;s[i]!='\0';i++){
        s[i] -= 0x20;
    }
}

int main(void){
    char str[]="dog";
    char *s=str;

    s[0]='b';
    s[1]='i';
    printf("%s\n",s);
    return 0;
}