#include <stdio.h>
int main(void){
    int hours = 0;
    int minutes = 0;
    int hours2 = 0;
    int minutes2 = 0;

    printf("请输入两个时间变量，我会给你计算出时差: \n");
    scanf("%d %d %d %d",&hours,&hours2,&minutes,&minutes2);
    int times = (hours2*60+minutes)-(hours*60-minutes);
    int timeshour = times/60;
    int timesminutes = times%60;
    printf ("the jetleg hours is %d and %d minutes",&timeshour ,&timesminutes);

}