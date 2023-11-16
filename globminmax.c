#include <stdio.h>
#include <stdlib.h>

int* mass_zapol(int size){
    int* mass=malloc(sizeof(int)*size);
    for (int i=0;i<size;i++){
        mass[i]=-10+rand()%21;//заполняет массив от -10 до 10
    }
    return mass;
}

int findlocmin(int* arr, int size){
    int min=11;
    if ((arr[0]<=arr[1]) && (arr[0]<min)) 
        min=arr[0];
    if ((arr[size-1]<=arr[size-2]) && (arr[size-1]<min))
        min=arr[size-1];
    for (int i=1;i<size-1;i++){
        if ((arr[i]<=arr[i-1]) && (arr[i]<=arr[i+1]) && (arr[i]<min))
            min=arr[i];
    }
}

int main(){
    int size=10;
    int* arra=mass_zapol(size);
    int min=findlocmin(arra,size);
    printf("%d", min);
    return 0;
}