#include <stdio.h>
#define Size 10

void read(int *p,int n)
{
    int i;
     for(i=0;i<n;i++)
        scanf("%d",p+i);

}

void display(int *p,int n)
{
    int i;
     for(i=0;i<n;i++)
        printf("%d",*(p+i));
}

int main()
{
    int Arr_int[Size];

    int i,n;

    printf("Enter size\n");

    scanf("%d",&n);

   // p=Arr_int; // or p=&Arr_int[0];

    read(Arr_int,n);

    display(Arr_int,n);

    printf("\nReverse Order\n");

    // for(i=n-1;i>=0;i--)
      //  printf("%4d",*(p+i));






}
