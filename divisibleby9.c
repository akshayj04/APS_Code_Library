
#include <stdio.h>

int main () {

int sum=0,digit;

long int n,m;

printf("Enter the Number\n");

scanf("%ld",&n);

m=n;

if(n>=9&&n<=10000000) {

do
{
    digit=n%10;

    sum+=digit;

    n=n/10;
}

while(n!=0);



printf("\nSum of the digits is %d",sum);

if(sum%9==0)
    printf("\n%ld is divisible by 9",m);

    else printf("\n%ld is not divisible by 9",m);

}

else printf("\nInvalid Number");

}





