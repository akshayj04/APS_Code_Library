#include <stdio.h>

int main() {

int n1,n2;

char opr;

scanf("%d %c %d",&n1,&opr,&n2);

switch(opr)

{
    case '+': printf("\n%d",n1+n2);
              break;

    case '-': printf("\n%d",n1-n2);
              break;

    case '*': printf("\n%d",n1*n2);
              break;

    case '/': if(n2!=0)
                printf("\n%f",n1/(float)n2);
              else
                printf("\nDivision not possible");
              break;

    case '%': if(n2!=0)
                printf("\n%f",n1%n2);
              else
                printf("\nMod not possible");
              break;

    default: printf("\nInvalid Operator");




}


}
