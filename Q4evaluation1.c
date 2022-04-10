#include <stdio.h>

int main() {

float min_a,cu_a,final_c,p_score;

char grade;

printf("Enter desired Grade\n");

scanf("%c",&grade);

printf("\n");

printf("Enter minimum average required\n");

scanf("%f",&min_a);

printf("\n");

printf("Enter current average in course\n");

scanf("%f",&cu_a);

printf("\n");

printf("Enter how much the final counts as a percentage of the course grade\n");

scanf("%f",&final_c);

p_score = (min_a-(100-final_c)*(cu_a/100))*(100/final_c);

printf("\nYou need a score of %.2f on the final to get a %c grade",p_score,grade);

return 0;

}
