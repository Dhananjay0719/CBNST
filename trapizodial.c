#include<stdio.h>
#include<math.h>
float val(float x){
    return 1/((x*x*x)+10);
}
int main(){
  int n;
  float a,b,h,i,sum=0;
  printf("Enter the Interval:");
  scanf("%f%f",&a,&b);

  sum=sum+val(a)+val(b);
  
  printf("Enter the total intervals");
  scanf("%d",&n);
  
  h=(b-a)/n;
  for(i=a+h;i<b;i=i+h){
    sum=sum+2*val(i);
  }

  sum=sum*(h/2);

  printf("Sum:%f",sum);
  return 0;
}