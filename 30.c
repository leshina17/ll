#include <stdio.h>
#include <stdlib.h>

void fillarray(double* a, int size){
    for (int i=0; i<size; i++){
        a[i]=(double)rand()/10000;
    }
}

void fillfile(double* pArr, int size){
    FILE*pf;
    pf=fopen("dash.txt", "w");
    if (pf==NULL){
        printf("no");
        return 1;
    }
    fprintf(pf,"%d\n",size);
    for (int i=0;i<size;i++){
        fprintf(pf, "%lf\n", pArr[i]);
    }
    fclose(pf);
}

int readfile(double* newarr){
    FILE* pf;
    pf=fopen("dash.txt", "r");
    int size=0;
    fscanf(pf, "%d", &size);
    newarr=malloc(sizeof(double)*size);
    for (int i=0;i<size;i++){
        fscanf(pf, "%lf\n", &newarr[i]);
    }
    fclose(pf);
    return size;
}

void print_ans(double* newarr, int size){
    for (int i=0; i<size; i++){
        printf("%lf\n", newarr[i]);
    }
}

int main(){
    int size=0;
    scanf("%d", &size);
    double* array=malloc(sizeof(double)*size);
    fillarray(array, size);
    fillfile(array, size);
    size=0;
    free(array);
    size=readfile(array);
    print_ans(array,size);
}