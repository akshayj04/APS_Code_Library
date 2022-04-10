#include <stdio.h>
#define size 10
#define True 1
#define False 0

void read(int[],int);
void display(int[],int);
void bubble_sort(int[],int);
void swap(int[],int,int);
int binary_search(int[],int,int);


int main()
{

    int RN[size],n,key;
    printf("Enter size and RNs\n");
    scanf("%d",&n);
    read(RN,n);
    printf("RN List\n");
    display(RN,n);
    printf("Sorted list\n");
    bubble_sort(RN,n);
    display(RN,n);
    printf("Enter Key RN to be searched\n");
    scanf("%d",&key);

    if(binary_search(RN,n,key))
        printf("Key RN is in the list");
    else
        printf("Key RN is not in the list");

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
        printf("%d ",a[i]);

    printf("\n");


}

int binary_search(int a[size],int n, int k)
{
 int i,j,low=0,high=n-1,mid;

 while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==k)
            return True;

        else if(k<a[mid])
            high=mid-1;

        else low=mid+1;

    }

    return False;
}


void   bubble_sort(int a[size],int m)
{
 int i,j,x;

 for(i=0;i<m-1;i++)
 {
    for(j=0;j<m-1-i;j++)
     if(a[j+1]< a[j])
        swap(a,j,j+1);
     /*printf("Pass%d:",i+1);
     display(a,m); */

 }
}

void swap(int a[size], int m, int n)
{

int t;
t=a[n];
a[n]=a[m];
a[m]=t;
}
