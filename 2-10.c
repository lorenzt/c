#include <stdio.h>
int main(void) {
double x,y;
printf("please enter x : \n");
scanf("%lf",&x);
if(x!=0){
    y=1/x;
    printf("y is %.1lf",y);
}
else {
    y=0;
    printf("y is 0");
}
}