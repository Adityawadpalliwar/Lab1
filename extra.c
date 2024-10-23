#include <stdio.h>
#include <math.h>

int main() {
 int h,r,t;
  float pi= 3.14;
  printf("enter the amount of horlicks aman got(in gm): ");
  scanf("%d",&h);
  
  printf("\n enter the radius of the circle: ");
  scanf("%d",&r);
  t=(h*100)/(2*(pi*r));
  printf("the number of toffies aman will get is %d",t);
  return 0;
}
