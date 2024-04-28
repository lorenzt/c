#include <stdio.h>
int main (void){
double x,y;
scanf("%lf",&x);
if (x<=15){
    y=4*x/3;
}
else{
    y=2.5*x-10.5;
}
printf("the water fee is %.2lf \n", y);
}