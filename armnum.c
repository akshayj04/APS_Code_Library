#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { int n,i,d,sum,x;

            scanf("%d",&n);

            for(i=1;i<=n;i++)
            {
                sum=0;
                x=i;

                while(x>0)
            {
                d=x%10;
                sum+=pow(d,3);
                x=x/10;

            }

            if(sum==i)
                printf("%d ",i);

            }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
