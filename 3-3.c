#include <stdio.h>
int main(void){    
        int score,n,i,sum;
        int fail=0;
        double average;
        
      
       
        printf("请输入一个有n个数: \n");
        scanf("%d",&n);  
      
        for ( i = 1; i <= n; i++)
        {
              printf("请输入第%d个分数: \n",i);
              scanf("%d",&score);
              sum=sum+score;
              average=sum/n;
              if(score<60){
            fail=fail+1;
        }

        }
        printf("平均分是：%.2lf,不及格人数是%d",average,fail);



}