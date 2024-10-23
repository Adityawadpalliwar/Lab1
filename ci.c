/*this is the program to find simple intrest*/
#include<stdio.h>
#include<math.h>

int main(){

float pri;
float rate;
float time;
float total_money,si;
float a;

//pow(pri,rate);



printf("enter the principal:");
scanf("%f",&pri);

printf("enter the rate:");
scanf("%f",&rate);

printf("enter the time period:");
scanf("%f",&time);

si=pri*rate*time/100;
printf("the value of simple intrest is %d",si)


total_money = pri*(pow(((rate/100)+1),time))-pri;

printf("the your compund intrest is %f ",total_money);


return 0;




}
