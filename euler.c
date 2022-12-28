#include<stdio.h>
#include<math.h>

float f(float a,float b){
    return a+b;
}
int main(){
   float x0,y0,xn,yn,h,n;

   scanf("%f%f",&x0,&y0);

   scanf("%f",&xn);

   scanf("%f",&h);
   
   n=(xn-x0)/h;

   for(int i=0;i<n;i++){
    yn=y0+h*f(x0,y0);
    xn=x0+h;
    printf("%f\t%f\t",xn,yn);
    x0=xn;
    y0=yn;
   }
}