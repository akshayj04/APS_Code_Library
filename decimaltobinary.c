#include <stdio.h>

long long int convert(int);

int main() {

char data;

printf("Enter data\n");

scanf("%c",&data);

data = (int)data;

printf("Decimal:%d\n",data);

printf("data=%lld",convert(data));

return 0;

}

long long int convert(int x)

{ int bn=0,i=1,r;

    while(x!=0) {

    r=x%2;

    bn=bn+(r*i);

    i=i*10;

    x=x/2;


}

return bn;
}



