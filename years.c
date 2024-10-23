#include<stdio.h>

int main(){
	int days,year;
	printf("enter the number of days: ");
	scanf("%d",&days);
	year=days/365;
	printf("number of years in %d days is %d",days,year);
	return 0;
}
