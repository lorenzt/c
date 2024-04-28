#include <stdio.h>
#include <math.h>
int main(void){
double x,y;
printf("please enter x : \n");
scanf("%lf",&x);
if(x<0){

y=pow((x+1),2)+2*x+1/x;
printf("if x<0 y is %.2lf",y);
}
else{
y=sqrt(x);
printf("if x>=0 y is %.2lf",y);
}
}