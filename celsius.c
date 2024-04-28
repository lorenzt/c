#include <stdio.h>
int main(void){
    int celsius,fahr;
    printf("please enter the fahr: \n");
    scanf("%d",&fahr);
    celsius=5/9*(fahr-32);
    printf("你输入的华氏%d转为摄氏是%d度\n",fahr,celsius);
    return 0;

}