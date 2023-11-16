#include <stdio.h>
#include <stdlib.h>

int* create_a(int size){
    int* a=malloc(sizeof(int)*size);
    for (int i=0;i<size;i++){
        a[i]=rand()%10;
    }
return a;
}

int* sum(int*f, int* s, int size){
    int* rez=malloc(sizeof(int)*size); // тоже массив
    for (int i=0;i<size;i++){
        rez[i]=f[i]+s[i];
    }
    return rez;
}

void print_array(int* rez, int row, int col){
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            printf("%d\t", rez[i*3+j]);
        }
        printf("\n");
    }
}

int main(){
    int* first=create_a(9);
    int* second=create_a(9); //2 массива 
    int* rez=sum(first,second,9);
    print_array(first,3,3);
    printf("\n");
    print_array(second,3,3);
    printf("\n");
    print_array(rez,3,3);
    return 0;
}