#include <stdio.h>  
  
int main() {  
    float number;  
    float number2;
    printf("请输入2个整数(i will give you the sum): ");  
    scanf("%f %f", &number,&number2);  
    printf("您输入的整数是: %f\n", number+number2);  
    return 0;  
}