#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    printf("Enter the total terms:");
    scanf("%d",&n);
    float x[n],y[n],Y[n],a,b,A,sumx,sumx2,sumxy,sumy;
    sumx=sumy=sumxy=sumx2=0;

    for(i=0;i<n;i++){scanf("%f",&x[i]);}
    for(i=0;i<n;i++){scanf("%f",&y[i]);}
    for(i=0;i<n;i++){Y[i]=log(y[i]);}
    for(i=0;i<n;i++){
        sumx+=x[i];
        sumy+=Y[i];
        sumxy+=x[i]*Y[i];
        sumx2+=x[i]*x[i];
    }

    A=((sumx2*sumy)-(sumx*sumxy))/((n*sumx2)-(sumx*sumx));
    b=((n*sumxy)-(sumx*sumy))/((n*sumx2)-(sumx*sumx));
    a=exp(A);
    printf("Equation is A=%4.3fe^%4.3f",a,b);
}