#include <stdio.h>

int main() {

int n,a=0,b=1,c;

printf("Enter the number of Fibonacci Series\n");

scanf("%d",&n);

printf("\n");

while(n>0)
{
  c=a+b;
  printf("%d ",c);
  a=b;
  b=c;
  n=n-1;
}

return 0;

}











