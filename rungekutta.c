#include<stdio.h>
#include<math.h>
float val(float a,float b){
    return a+b;
}
int main(){
    float x0,xn,yn,y0,k1,k2,k3,k4,k,h;
    int n;
    printf("Enter the values of x0 y0 and h:");
    scanf("%f%f%f",&x0,&y0,&h);

    printf("Enter the value of x for which y is to be calculated:");
    scanf("%f",&xn);

    n=(xn-x0)/h;

    for(int i=0;i<n;i++){
        k1=h*val(x0,y0);
        k2=h*val((x0+h/2),(y0+k1/2));
        k3=h*val((x0+h/2),(y0+k2/2));
        k4=h*val((x0+h),(y0+k3));

        k=(k1+2*k2+2*k3+k4)/6;

        yn=y0+k;
        y0=yn;
        x0=x0+h;
    }
    printf("Value of Y at X=%f is %f",xn,yn);
}