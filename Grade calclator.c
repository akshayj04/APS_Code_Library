#include <stdio.h>

int main() {
float m1,m2,m3,m4,m5,Grade,Percentage;

printf("Enter the name and marks of the student out of 100\n");

scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

Grade = (m1+m2+m3+m4+m5)/5;

Percentage = ((m1 + m2 + m3 + m4 + m5)/500) * 100;

printf("Grade = %f\n",Grade);

printf("Percentage = %f%%",Percentage);

return 0;
}
