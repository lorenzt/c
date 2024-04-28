#include <stdio.h>
int main(void){
    double celsius;
    int lower,upper;
    printf("please enter lower and upper: \n");
    scanf("%d%d",&lower,&upper);
    for ( lower=lower; lower <=upper; lower=lower+2)
    {
       celsius=5.0/9.0*(lower-32); /* code */
       printf(" 华氏%4d , 摄氏%4.1lf \n", lower,celsius);
    }
        


}