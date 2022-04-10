#include <stdio.h>
#include <math.h>

int main() {

float x1,y1,x2,y2,distance,s;

printf("Enter co-ordinates value\n");

scanf("%f%f%f%f",&x1,&y1,&x2,&y2);

s=pow((x2-x1),2) + pow((y2-y1),2);

distance = sqrt(s);

printf("Distance = %f",distance);

return 0;
}
