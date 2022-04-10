#include <stdio.h>

int main()
{
    int a=100,b=200,*pa,*pb,*p=NULL;

    void *q;

    pa=&a;
    pb=&b;


    printf("Addition is:%d\n",*pa+*pb);

    printf("Enter nos\n");

    scanf("%d%d",pa,pb);

    printf("Sum:%d\n",*pa+*pb);


    p=pa; // p is also pointing to variable a

    printf("p is %d\n",*p);

    q=pb; // void assignment

    printf("q is %d\n",*(int *)q); //type casting

    printf("Oprn 1:%d\n",*pb+10);

    printf("Oprn 2:%d\n",*pb*200);

    printf("Oprn 3:%.2f\n",*pb/5.0);



}
