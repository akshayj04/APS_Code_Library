#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void Read(int *,int);
void Display(int *,int);
void Min(int *,int);

void display2(int *p,int a,int b)
{
    int i;

    for(i=a;i<=b;i++)
    printf("%d ",*(p+i));


}


int main() {

   int *p,n,a,b;

    scanf("%d",&n);

    p=malloc(sizeof(int)*(n));

    Read(p,n);

    scanf("%d%d",&a,&b);

    display2(p,a,b);


    return 0;
}

void Read(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        scanf("%d",p+i);
}

void Display(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
        printf("%d",*(p+i));

}

void Min(int *p,int n)
{
    int i,m;
    m=*p;

    for(i=0;i<n;i++)
    {
        if(*(p+i)<m)
            m=*(p+i);
    }

    *(p+n)=m;


}


