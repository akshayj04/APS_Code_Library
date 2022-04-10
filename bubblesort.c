#include <stdio.h>
#include <limits.h>
#define size 10

void read(int[],int);
void display(int[],int);
void bubble_sort(int[],int);
void swap(int[],int,int);


int main()
{

    int file_size[size],n;
    printf("Enter size and size of files\n");
    scanf("%d",&n);
    read(file_size,n);
    printf("Unsorted List\n");
    display(file_size,n);
    bubble_sort(file_size,n);
    printf("Sorted List\n");
    display(file_size,n);

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

void bubble_sort(int a[size],int m)
{
 int i,j,x;

 for(i=0;i<m-1;i++)
 {
    for(j=0;j<m-1-i;j++)
     if(a[j+1]<a[j])
        swap(a,j,j+1);
     printf("Pass%d:",i+1);
     display(a,m);

 }
}

void swap(int a[size], int m, int n)
{

int t;
t=a[n];
a[n]=a[m];
a[m]=t;
}
