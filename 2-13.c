#include <stdio.h>
int main(void){
    double sum;
    int i ,n;
    sum=0;
    printf("请输入n: \n");
    scanf("%d",&n);
    for( i=1 ; i<=n; i=i+1)
    {
       sum=sum+1.0/i;
       
    };
    
    printf("sum is %.2lf",sum);


}