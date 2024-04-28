#include <stdio.h>
#include <math.h>
int main(void){
  int i,n,power;

  printf("请输入n: \n");
  scanf("%d",&n);
  for ( i = 0; i <=n; i++)
  { 
     
     power=pow(3,i);
       /* code */
    printf("3的%d 次方是 %d \n",i,power);
  };
  return 0;
  
    
}