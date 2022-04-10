#include <stdio.h>

int main() {

int i=0,ch;

char text[100];

scanf("%[^\n]s%*c",text);

printf("%s\n",text);

while(text[i]!='\0') // \0 is for null char at end of a string. it reads each character until null char is encountered after which while exits.
{
    ch=text[i];

    printf("%c   %d\n\n",text[i],ch);

    i++;

    }

    return 0;


}
