#include <math.h>
#include <stdio.h>

int* array_zadaem(int size){
    int mass[size];
    int count=size;
    int* array=malloc(sizeof(int)*size);
    while (count>1){
        int chislo=(int)pow(-1, time (NULL)*rand()%4)*(1+time(NULL)*rand()%100);
        int index1=time(NULL)*rand()%size;
        int index2=time(NULL)*rand()%size;
        while ((mass[index1]!=0) && (mass[index2]!=0))
            index1=time(NULL)*rand()%size;
            index2=time(NULL)*rand()%size;
        array[index1]=chislo;
        array[index2]=chislo;
        count-=2;
    }
    for (int i=0; i<size; i++){
        if (array[i]==0)
            array=time(NULL)*rand();
    }
    int array2[11]={0,1,-2,3,4,5,4,3,-2,1,0}
    return array2;
}