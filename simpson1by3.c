#include<stdio.h>
#include<math.h>
float val(float x){
    return 1/(1+x*x);
}
int main(){
  int n;
  float a,b,h,i,sum=0;
  printf("Enter the Interval:");
  scanf("%f%f",&a,&b);

  sum=sum+val(a)+val(b);
  
  printf("Enter the total intervals");
  scanf("%d",&n);

  int count=1; 
  
  h=(b-a)/n;
  for(i=a+h;i<b;i=i+h){
    if(count%2==0)
    {sum=sum+2*val(i);}
    else
    {sum=sum+4*val(i);}
    count++;
  }

  sum=sum*(h/3);

  printf("Sum:%f",sum);
  return 0;
}