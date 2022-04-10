
#include <stdio.h>


int main()

{
    int i,alice=0,bob=0,a[3],b[3],r[2];

    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);

    }

     for(i=0;i<3;i++)
    {

     if(a[i]>b[i])
     alice++;

     if (b[i]>a[i])
     bob++;

     }

    r[2]={alice,

    printf("%d",&r[2]);


}
