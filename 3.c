#include <stdio.h>
#include <stdlib.h>

void print_two_int(double* nums){
    int* array_in_func=(int*)nums;
    printf("%d %d", array_in_func[0], array_in_func[1]);
}
int main(){
    int first=10;
    int second=1000;

    int* array=malloc(sizeof(int)*2);
    array[0]=first;
    array[1]=second;

    double* pointer=(double*)array;
    print_two_int(pointer);
    return 0;
}