#include <stdio.h>
int main(void){
int a,b,c,d,e;
double f;
printf("please enter a b : \n");
scanf("%d %d",&a,&b);
c=a+b;
d=a-b;
e=a*b;
f=(double)a/b;
printf("sum is%d,sub is %d,product is %d, ratio is %.2lf",c,d,e,f);
return 0;
}
