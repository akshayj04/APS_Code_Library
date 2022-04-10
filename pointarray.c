#include<stdio.h>
#include<malloc.h>
void read(int*,int);
void display(int*,int);
void count(int*,int);
int main()
{
    int *p, n;
    printf("enter size and data\n");
    scanf("%d",&n);
    p=malloc((n+2)*sizeof(int));
    read(p,n);
    display(p,n);
    count(p,n);
    printf("\nzeroes:%d \n ones:%d",*(p+n),*(p+n+1));
}
void read(int *p,int n)
{
    int i;
    for(i=0;i<n;++i)
        scanf("%d",p+i);
}
void display(int *p,int n)
{
    int i;
    for(i=0;i<n;++i)
        printf("%4d",*(p+i));
}
void count(int *p,int n)
{
    int i;
    *(p+n)=0;/*zeroes counter*/
    *(p+1+n)=0;/*ones counter*/
    for(i=0;i<n;++i)
        {
            if(*(p+i)==0)
            ++(*(p+n));
            if(*(p+i)==1)
            ++(*(p+n+1));
        }
}


