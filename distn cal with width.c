#include <stdio.h>
#include <math.h>

int main() {

float x1,y1,x2,y2,distance,s;

printf("Enter co-ordinates value\n");

scanf("%2f%2f%2f%2f",&x1,&y1,&x2,&y2);

printf("")

s=pow((x2-x1),2) + pow((y2-y1),2);

distance = sqrt(s);

printf("Distance = %3.2f",distance);

return 0;
}
