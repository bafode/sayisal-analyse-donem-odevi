#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define PI 3.142857142857143
#ifndef MAX
#define MAX 200
// Maximal number of triangle if max number is not defined on compuling time

int main(int arg ,char const* argv[])
{
    int n=4,r=3;
    float e_0=0.01,e_1,A[MAX];

    /*
    general formule after calculation and at the
    */

    do{
            n=n+1;
            A[n]=n*(pow(r,2)*sin(PI/n)*cos(PI/n));
            A[n-1]=(n-1)*(pow(r,2)*sin(PI/(n-1))*cos(PI/(n-1)));
            e_1=fabs((A[n]-A[n-1])/A[n])*100;
            printf("%d_Air value:%1f with error: %1f\n",n,A[n],e_1);
            A[n-1]=A[n];


    }while(e_1<e_1); //control if fabs((A[n]-A[n-1])/A[n])<e_0


    return 0;
}
