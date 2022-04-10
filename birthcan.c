#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(int x, int y[100000]) {

int l,a,i,d,ctr=0;

l=y[0];

for(i=0;i<x;i++)
{


    if(y[i]>l)
       l=y[i];

}
 for(i=0;i<x;i++)
    {
        if(y[i]==l)
     ctr++;


     }



return (ctr);

}

int main()
{
  int c,j,n,a[100000];

  scanf("%d",&n);

   for(j=0;j<n;j++)
   {

    scanf("%d",&a[j]);


   }

   c=birthdayCakeCandles(n,a);

   printf("%d",c);

   return 0;

}
