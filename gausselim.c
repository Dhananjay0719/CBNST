#include<stdio.h>
#include<math.h>
int main(){
    int n,i,j,k;
    printf("Enter the number of unknowns:");
    scanf("%d",&n);
    
    float a[n][n+1],value[n];
    float sum,ratio;

    for(i=0;i<n;i++){             //Augmented Matrix
        for(j=0;j<n+1;j++)
        {scanf("%f",&a[i][j]);}
    }
    
    //Converting to UTM
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            if(j>i){
                ratio=a[j][i]/a[i][i];
                for(k=0;k<n+1;k++){
                    a[j][k]=a[j][k]-(ratio*a[i][k]);
                }
            }
        }
    }
    value[n-1]=a[n-1][n]/a[n-1][n-1];
    //Back Substitution
    for(i=n-2;i>=0;i--){
        sum=0;
        for(j=i+1;j<n;j++){
            sum+=a[i][j]*value[j];
        }
        value[i]=(a[i][n]-sum)/a[i][i];
    }
    for(i=0;i<n;i++){printf("%f",value[i]);}
}