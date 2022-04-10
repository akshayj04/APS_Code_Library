#include <stdio.h>

int main()

{

int n,i,a,sum;

scanf("%d",&n);

for(i=n;i>0;i=i/10)
{
a=i%10;
sum=sum + a;


}
printf("%d",sum);


return 0;
}
