#include <stdio.h>
#define Size 10



int main()
{
    int Arr_int[Size];

    int i,n,*p;

    printf("Enter size\n");

    scanf("%d",&n);

 //   p=Arr_int;
    p=&Arr_int[0];

    for(i=0;i<n;i++)
     {

        scanf("%d",p);
        ++p;

    }

    --p;

    printf("\nReverse Order\n");

     for(i=n-1;i>=0;i--)
        {
            printf("%4d",*p);
            --p;

        }




}

