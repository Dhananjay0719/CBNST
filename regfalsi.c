#include<stdio.h>
#include<math.h>
float val(float x){
    return x*x*x-2*x-5;
}

float bisect(float x1,float x2){
  return (x1*val(x2)-x2*val(x1))/(val(x2)-val(x1));
}

int main(){
    int maxiteration,i,a,b;
    float x1,x2,x,x3;
    printf("Enter the Maximum no of Iterations");
    scanf("%d",&maxiteration);
    do{
        printf("Enter the Intervals:");
        scanf("%f%f",&x1,&x2);

        if(val(x1)*val(x2)>0){
            printf("Invalid Intervals");
            continue;
        }
        else{
            printf("Valid Intervals");
            break;
        }
    }while(1);
    i=1;
    x=bisect(x1,x2);
    while(i<=maxiteration){
     if(val(x)*val(x1)<0){x2=x;}
     else{x1=x;}
     x3=bisect(x1,x2);
     if(fabs(x3-x)<0.001){
        printf("Root:%f Total Iterations:%d",x,i);
        return 0;
     }
     x=x3;
     i++;
    }
    printf("Root:%f Total Iterations:%d",x,--i);
    return 0;
}