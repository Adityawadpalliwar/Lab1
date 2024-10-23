#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float x;

	printf("enter marks of all the subjects: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	x=(float)(a+b+c+d+e)/5;
		
	printf("percentage of your marks is %f",(float)x);
	
	return 0;
	
	
} 
