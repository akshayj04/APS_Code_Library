#include <stdio.h>

int main() {

char s;

printf("Enter the current day of the week [MTWTFSS]\n");

scanf("%c",&s);

if(s=='F')
    printf("Have a nice weekend!");

else printf("Have a nice day!");

return 0;


}
