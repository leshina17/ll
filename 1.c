//массив с 1, функция на любое место ставит любое число, найти то место
#include <stdio.h>
#include <stdlib.h>

int* fa(int size){
    int* pp=malloc(sizeof(int)*size);
    for (int i=0;i<size;i++){
        pp[i]=1;
    }
    return pp;
}
void change_elem(int* ppp, int size){
    int a=2+rand()%4;
    int rand_ind=rand()%size; //от 0 до 16
    ppp[rand_ind]=a; //пришли к конкретному элементу
}
void find_num(int* arr1,int arrsize, int* p_index, int* p_value){
    for (int i=1;i<arrsize-1;i++){
        if ((arr1[i]!=arr1[i+1])&&(arr1[i]!=arr1[i-1])){
            *p_value=arr1[i];
            *p_index=i;
            return;
        }
    }
    if ((arr1[0]!=arr1[1])&&(arr1[0]!=arr1[2])){
        *p_index=0;
        *p_value=arr1[0];
    }
    if ((arr1[arrsize-1]!=arr1[arrsize-2])&&(arr1[arrsize-1]!=arr1[arrsize-3])){
        *p_index=arrsize-1;
        *p_value=arr1[arrsize-1];
    }
}
    int main(){
        int r=17;
        int* pp=fa(r);
        change_elem(pp,r);
        int index, value;
        find_num(pp,r, &index, &value);  //& - взять адрес перем;
        printf("%d %d \n", index, value);
        return 0;
    }
