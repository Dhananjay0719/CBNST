#include<stdio.h>
#include<math.h>
float val(float x){
    return x*x*x-3*x-1;
}

float diff(float x){
  return 3*x*x-3;
}
int main(){
    int maxiteration,i=1;
    float x1,x2,x,x0;
    printf("Enter the Maximum no of Iterations:");
    scanf("%d",&maxiteration);
    do{
        printf("Enter the Intervals:");
        scanf("%f%f",&x1,&x2);

        if(val(x1)*val(x2)>0){
            printf("Invalid Intervals\n");
            continue;
        }
        else{
            printf("Valid Intervals\n");
            break;
        }
    }while(1);
    x0=(x1+x2)/2;
    while(i<=maxiteration){
     x=x0-(val(x0)/diff(x0));
     if(fabs(x-x0)<0.0001){
        printf("Final Root:%f Total Iterations:%d",x,i);
        return 0;
     }
     x0=x;
     i++;
    }
    printf("Final Root:%f Total Iterations:%d",x,i);
    return 0;
}