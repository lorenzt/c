#include <stdio.h>
int main(void){
    double sum;
    int i ,n,demo;
    sum=0;demo=1;
    printf("请输入n: \n");
    scanf("%d",&n);
    for( i=1 ; i<=n; i=i+1)
    {
    
       sum=sum+1.0/demo;
       demo=demo+2;
       
    };
    
    printf("sum is %.2lf",sum);


}