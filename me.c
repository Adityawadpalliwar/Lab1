#include <stdio.h>
#include <math.h>
/*This program is to find mechanical energy of a particle */

int main() {
  int m,h,v;
  float g=9.81,e;
  printf("This program is to find mechanical energy of a particle\n");
  printf("\nenter the value of mass(in kg): ");
  scanf("%d",&m);
  printf("\nenter the value of height(in m): ");
  scanf("%d",&h);
  printf("\nenter the value of velocity(in m/s): ");
  scanf("%d",&v);
  e=(float)(m*(g*h)+(1.0/2*(m*(v*v))));
  printf("\nthe value of E(mechanical energy)= %f ",e);
  return 0;
}
