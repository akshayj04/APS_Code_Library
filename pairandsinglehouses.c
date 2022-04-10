#include <stdio.h>

int main () {

int n;

printf("Enter number of Houses\n");

scanf("%d",&n);

if(n%2==0)
{
    while(n>0)
    {
        printf("\nPair Houses");
        n=n-2;
    }

}

else{

    while(n>1)
    {
        printf("\nPair Houses");
        n=n-2;
    }

    printf("\nSingle House");


}

return 0;

}


