#include <stdio.h>
#define size 10
#define True 1
#define False 0

void read(int[],int);
void display(int[],int);
int linear_search(int[],int,int);


int main()
{

    int RN[size],n,key;
    printf("Enter size and RNs\n");
    scanf("%d",&n);
    read(RN,n);
    printf("RN List\n");
    display(RN,n);
    printf("Enter Key RN to be searched\n");
    scanf("%d",&key);

    if(linear_search(RN,n,key))
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

int linear_search(int a[size],int n, int k)
{
 int i;

 for(i=0;i<n;i++)
 {
    if(a[i]==k)
        return True;


 }

 return False;

}

