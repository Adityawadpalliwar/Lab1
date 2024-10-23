#include<stdio.h>
int main(){
	int a;
	printf("enter your distance (in km): ");
	scanf("%d",&a);
	printf("\nyour distance is %d m",1000*a);
	printf("\nyour distance is %d cm",100000*a);
	printf("\nyour distance is %d mm",1000000*a);
	return 0;
	
	
	
}
