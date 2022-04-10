#include <stdio.h>

void swap(int *,int *);

int main()
{

    int m=10,n=30;

    printf("m=%d n=%d\n",m,n);

    swap(&m,&n);

    printf("m=%d n=%d\n",m,n);
}

void swap(int *pm,int *pn)
{
    int t;
    t=*pm;
    *pm=*pn;
    *pn=t;

}
