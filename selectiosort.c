#include <stdio.h>
#include <limits.h>
#define size 10

void read(int[],int);
void display(int[],int);
void selection_sort(int[],int);
void swap(int[],int,int);
int min(int[],int,int);

int main()
{

    int list[size],n;
    printf("Enter size and list\n");
    scanf("%d",&n);
    read(list,n);
    printf("Unsorted List\n");
    display(list,n);
    selection_sort(list,n);
    printf("Sorted List\n");
    display(list,n);

    return 0;
}

void read(int a[size],int m)
{

    int i;
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);

}

void display(int a[size],int m)
{
    int i;
    for(i=0;i<m;i++)
        printf("%4d",a[i]);

    printf("\n");


}

void selection_sort(int a[size],int m)
{
 int i,M;

 for(i=0;i<m-1;i++)
 {
     M=min(a,i,m); // returns index of minimum element
     swap(a,i,M);
     printf("Pass%d:",i+1);
     display(a,m);
 }
}

int min(int a[size],int k, int n)
{
    int j,m=INT_MAX,x;

    for(j=k;j<n;j++)
        if(m>a[0])
    {
        m=a[j];
        x=j; // index of minimum element
    }

    return x;

}

void swap(int a[size], int m, int n)
{

int t;
t=a[n];
a[n]=a[m];
a[m]=t;
}
