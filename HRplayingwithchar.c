#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ char ch[25],s[25],sen[25];

scanf("%s\n",ch);
scanf("%s\n",s);
scanf("%[^\n]%*c",sen);

printf("%s\n",ch);
printf("%s\n",s);
printf("%s\n",sen);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
