#include <stdio.h>

union job
{
    int salary;
    int ID;
};

int main()
{
    union job J;
    J.salary=12000;

    printf("%d\n",J.salary);
    printf("%d",J.ID);


}
