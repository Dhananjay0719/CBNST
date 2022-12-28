#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("Enter the total terms:");
    scanf("%d",&n);
    float x[n],y[n],sumx,sumy,sumx2,sumxy,a,b;
    sumx=sumy=sumx2=sumxy=0;
    for(i=0;i<n;i++){scanf("%f",&x[i]);}
    for(i=0;i<n;i++){scanf("%f",&y[i]);}
    for(i=0;i<n;i++)
    {
    sumx+=x[i];
    sumy+=y[i];
    sumxy+=x[i]*y[i];
    sumx2+=x[i]*x[i];
    }
    
    a=((sumx2*sumy)-(sumx*sumxy))/((n*sumx2)-(sumx*sumx));
    b=((n*sumxy)-(sumx*sumy))/((n*sumx2)-(sumx*sumx));
    printf("Equation is- Y=%3.3f+%3.3fX",a,b);
    return 0;
}
