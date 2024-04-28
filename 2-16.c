#include <stdio.h>
int main(void){
  
  int n , demo,flag,i;
  double sum,item;
  flag=1;
  demo=1;
  item=1;
  printf("please enter n: \n");
  scanf("%d",&n);
  for ( i = 0; i < n; i++)
  {
    sum=sum+item;
    flag=-flag;
    demo=demo+3; 
    item=flag*(1.0/demo); //正负数和分数都归在这里
    /* code */
  }
  printf("sum is %.3lf",sum);
        
  

}