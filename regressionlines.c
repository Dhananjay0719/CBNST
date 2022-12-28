#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    printf("Enter the total terms:");
    scanf("%d",&n);
    float x[n],y[n],sumx,sumy,sumxy,sumx2,a,b;
    sumx=sumy=sumxy=sumx2=0;
    for(i=0;i<n;i++){scanf("%f",&x[i]);}
    for(i=0;i<n;i++){scanf("%f",&y[i]);}
    for(i=0;i<n;i++){
     sumx+=x[i];
     sumy+=y[i];
     sumx2+=x[i]*x[i];
     sumxy=x[i]*y[i];
    }

    b=((n*sumxy)-(sumx*sumy))/((n*sumx2)-(sumx*sumx));

    a=(sumy-(b*sumx))/n;

    printf("Equation is: y=%0.2f+%0.2fx",a,b);
}