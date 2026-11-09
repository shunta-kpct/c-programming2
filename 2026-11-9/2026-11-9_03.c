#include <stdio.h>

int main(void){
    char str[3][5]={};
    for(int i=0;i<3;i++){
        scanf("%5s",str[i]);
        char c;
        while((c = getchar()) != '\n' && c != EOF);
    }

    for(int i=0;i<3;i++){
        printf("%s\n",str[i]);
    }

    return 0;
}