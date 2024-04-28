#include <stdio.h>
int main(void){
  
        char op;
        int value1,value2,answer;
        printf("enter value1 and value2 4 calculation: \n");
        scanf("%d%c%d",&value1,&op,&value2);
               
        switch (op)
        {
        case '+': 
            answer=value1+value2;
            printf("answer is %d \n",answer);
        
     case '-': 
            answer=value1-value2;
            printf("answer is %d \n",answer);
            

     case '*': 
            answer=value1*value2;
            printf("answer is %d \n",answer);
        
         case '/': 
            if(value2!=0){
            answer=value1/value2;
            printf("answer is %d",answer);}
            else{
                printf("divisor can not be 0\n");
            }
        default:
           printf("unknow op try another \n");
        }


}