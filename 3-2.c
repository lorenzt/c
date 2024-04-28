#include <stdio.h>
int main(void){
 
int number,even,odd,i,n;
even=0;
odd=0;
printf("请输入n个数: \n");
scanf("%d",&n);
printf("请输入%d 个数",n);
for ( i = 0; i < n; i++)
{
    /* code */
scanf("%d", &number); 
 if(number%2==0) {
    even = even+1;
 } else{
    odd=odd+1;
 }     
}
printf("odd:%d 个, even:%d 个",odd,even);
return 0;
}