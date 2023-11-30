#include <stdio.h>
#include <stdlib.h>
#include "string.h"

char* strcon(int n){
    int x=n;
    int size=0;
    while (x>0){
        size++;
        x=x/10;
    }
    char* str=malloc(size+1);
    for (int i=size-1;i>=0;i--){
        str[i]=n%10+48;
        n=n/10;
    }
    str[size]='\0';
    return str;
}

int main(){
    int num=1235321;
    char* str=strcon(num);
    printf("%s", str);
    return 0;
}// из инта перевела в строчку