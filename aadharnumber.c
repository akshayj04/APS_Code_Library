#include <stdio.h>

int main() {

long long int n;

int digit,a=0,b=0,c=0;

printf("Enter the 12-digit Aadhar Number\n");

scanf("%lld",&n);

if(n>=100000000000&&n<=999999999999) {

    printf("\nValid Aadhar Number");

    while(n!=0)

    {
        digit=n%10;

        if(digit%2==0){

            if(digit==0)
                a++;

            else b++;


        }


        else
            c++;

            n=n/10;

     }

    printf("\nThe number of Zeroes are %d",a);

    printf("\nThe number of Even Digits are %d",b);

    printf("\nThe number of Odd Digits are %d",c);

    }

    else printf("\nInvalid Aadhar Number");

     return 0;

    }












