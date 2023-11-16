#include <stdio.h>
#include <math.h>

void math(int a, int b,int* pSum, int* pRas, int* pUmn, double* pDiv){
    *pSum=a+b;
    *pRas=(fabs)(a-b);
    *pUmn=a*b;
    if (b!=0)
        *pDiv=(double)a/b;
    else 
        pDiv=0;
}

int main(){
     int a,b,s,r,u;
     double d;
     a=10; b=2;
     math(a,b,&s,&r,&u,&d);
     printf("%d %d %d %lf", s,r,u,d);
    return 0;
}