#include<stdio.h>
#include<math.h>
int main(){
     int n,i,j,fact;
     float x,y,u1,u;
     printf("Enter the Number of Terms:");
     scanf("%d",&n);

     float a[n][n+1];
     printf("Enter the values of x:");
     for(i=0;i<n;i++){scanf("%f",&a[i][0]);}

     printf("Enter the values of y:");
     for(i=0;i<n;i++){scanf("%f",&a[i][1]);}

     printf("Enter the value for which y is to be calculated");
     scanf("%f",&x);
     
     for(j=2;j<n+1;j++){
        for(i=0;i<n+1-j;i++)
        {a[i][j]=a[i+1][j-1]-a[i][j-1];}
      }

    for(i=0;i<n;i++)
    {for(j=0;j<=n-i;j++)
    {
        printf("%f\t",a[i][j]);
    }
    printf("\n");}
    
    u=(x-a[0][0])/(a[1][0]-a[0][0]);
    
    y=a[0][1];
    fact=1;
    u1=u;

    for(i=2;i<=n;i++){
      y=y+(u1*a[0][i])/fact;
      fact=fact*i;
      u1=u1*(u-(i-1));
    }

    printf("The Value of Y at X=%g is %f",x,y);
}