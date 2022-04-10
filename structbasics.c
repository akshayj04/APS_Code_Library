#include <stdio.h>

struct car //define struct ( global definition and can be use in all functions , not just in main )
{
    char avl; // Y- Available , N- Not Available
    float Cost;
    char Name[30];
    float SR;

    char Color[10];
};

int main()
{
    struct car c1,c2;

    printf("Enter car detalis\n");

    scanf("%1s%f%s%f%s",&c1.avl,&c1.Cost,c1.Name,&c1.SR,c1.Color);

    scanf("%1s%f%s%f%s",&c2.avl,&c2.Cost,c2.Name,&c2.SR,c2.Color);

    printf("%c %f %s %f %s\n",c1.avl,c1.Cost,c1.Name,c1.SR,c1.Color);

    printf("%c %f %s %f %s",c2.avl,c2.Cost,c2.Name,c2.SR,c2.Color);


}
