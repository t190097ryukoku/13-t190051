#include <stdio.h>
#define MAX 64

int main(void){
    double x1[MAX],x2[MAX],x3[MAX],x4[MAX];
    double xx1[MAX],xx2[MAX],xx3[MAX],xx4[MAX];
    int i;
    x1[0]=0.0;
    x2[0]=0.0;
    x3[0]=0.0;
    x4[0]=0.0;
    for(i=0;i<MAX;i++){
        xx1[i]=(20-2*x2[i]-x3[i]-x4[i])/9;
        xx2[i]=(16-2*xx1[i]+2*x3[i]-x4[i])/8;
        xx3[i]=(8+xx1[i]+2*xx2[i]+2*x4[i])/7;
        xx4[i]=(17-xx1[i]+xx2[i]+2*xx3[i])/6;
        if(x1[i]==xx1[i]&&x2[i]==xx2[i]&&x3[i]==xx3[i]&&x4[i]==xx4[i])break;
        x1[i+1]=xx1[i];
        x2[i+1]=xx2[i];
        x3[i+1]=xx3[i];
        x4[i+1]=xx4[i];
    }
    printf("x1=%f\nx2=%f\nx3=%f\nx4=%f\n",x1[i],x2[i],x3[i],x4[i]);
}