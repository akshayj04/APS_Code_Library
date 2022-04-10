#include <stdio.h>

struct std_info
{
    char Name[30];
    int Rn;
    int marks[3];
    float result;
};

int main()
{
    struct std_info s1,s2,s3;

    int i;

    printf("Enter data\n");

    scanf("%s%d%d%d%d",s1.Name,&s1.Rn,&s1.marks[0],&s1.marks[1],&s1.marks[2]);

    scanf("%s%d%d%d%d",s2.Name,&s2.Rn,&s2.marks[0],&s2.marks[1],&s2.marks[2]);

    scanf("%s%d%d%d%d",s3.Name,&s3.Rn,&s3.marks[0],&s3.marks[1],&s3.marks[2]);

    s1.result=(s1.marks[0]+s1.marks[1]+s1.marks[2])/300.0*100;

    s2.result=(s2.marks[0]+s2.marks[1]+s2.marks[2])/300.0*100;

    s3.result=(s3.marks[0]+s3.marks[1]+s3.marks[2])/300.0*100;

    printf("\n%s %d %d %d %d %.2f\n",s1.Name,s1.Rn,s1.marks[0],s1.marks[1],s1.marks[2],s1.result);

    printf("%s %d %d %d %d %.2f\n",s2.Name,s2.Rn,s2.marks[0],s2.marks[1],s2.marks[2],s2.result);

    printf("%s %d %d %d %d %.2f",s3.Name,s3.Rn,s3.marks[0],s3.marks[1],s3.marks[2],s3.result);







}
