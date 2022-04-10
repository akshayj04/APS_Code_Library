#include <stdio.h>
#define Size 5

int sum(int arr[],int);

int main()

{
    int A[]={10,20,5,7};
    printf("%d",sum(A,4));
    return 0;
}

int sum(int arr[Size],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s+=arr[i];

    return s;
}
