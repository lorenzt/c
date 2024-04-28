#include <stdio.h>
int main(void){
  
        int x,y;

        printf("请输入x:");
        scanf("%d",&x);
        if (x==0)
        { 
            y=0;
        }else if (x<0)
        {
            y=-1;
        }else{
            y=1;
        }
        printf("y is %d",y);
        


}