#include <stdio.h>

int main() {

int n=1;

long long int prod=1;

printf("Read Numbers\n");

  do

    {
     prod*=n; // prod = prod*n

     scanf("%d",&n);

     }

     while(n!=0);

        printf("\nProduct of numbers is %ld",prod);

     return 0;







}
