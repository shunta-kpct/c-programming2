#include<stdio.h>

int main(){
    char str[5];

    scanf("%4s",str);
    char c;
    while((c = getchar()) != '\n' && c != EOF){

    }

    printf("%s\n",str);
     scanf("%4s",str);
    while((c = getchar()) != '\n' && c != EOF){

    }

    printf("%s\n",str);
    return 0;
}