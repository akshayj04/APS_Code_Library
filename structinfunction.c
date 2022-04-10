#include <stdio.h>

typedef struct
{
    char Name[30];
    int Rn;
    int marks[3];

    float result;
}std_info;

std_info read(std_info);
std_info cal(std_info);
void display(std_info);



typedef int var;

int main()

{
    std_info s1,s2,s3,s4={"ABC",125,35,45,66,0.0}; // must initialise all the fields

    var i;

    printf("Enter data\n");


    s1=read(s1);s2=read(s2);s3=read(s3);
    s1=cal(s1);s2=cal(s2);s3=cal(s3);s4=cal(s4);
    display(s1);display(s2);display(s3);display(s4);

    printf("\nSize of struct variavble %d %d",sizeof(s4),sizeof(std_info));





}


std_info read(std_info s)
{
    scanf("%s%d%d%d%d",s.Name,&s.Rn,&s.marks[0],&s.marks[1],&s.marks[2]);
    return s;
}

std_info cal(std_info s)
{
    s.result=(s.marks[0]+s.marks[1]+s.marks[2])/300.0*100;
    return s;

}

void display(std_info s)
{
    printf("%s %d %d %d %d %.2f\n",s. Name,s.Rn,s.marks[0],s.marks[1],s.marks[2],s.result);
}
