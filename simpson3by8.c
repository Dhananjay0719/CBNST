#include<stdio.h>
#include<math.h>
float val(float x){
    return 1/(1+x*x);
}

int main(){
    int n;
    float i,a,b,h,sum=0;
    scanf("%f%f",&a,&b);
    scanf("%d",&n);

    h=(b-a)/n;

    sum=sum+val(a)+val(b);
    int pos=1;
    for(i=a+h;i<b;i=i+h){
      if(pos%3==0){sum=sum+2*val(i);}
      else{sum=sum+3*val(i);}
      pos++;
    }
    sum=(sum*3*h)/8;
    printf("%f",sum);
}