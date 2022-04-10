#include <stdio.h>

int main () {

int n1,n2,n3,max1;

printf("Enter the 3 numbers\n");

scanf("%d%d%d",&n1,&n2,&n3);

max1=(n1>n2)?n1:n2;

(max1>n3)?printf("%d",max1):printf("%d",n3);

return 0;



}
