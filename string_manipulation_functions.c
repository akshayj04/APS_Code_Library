#include <stdio.h>
#include <string.h> // string manipulation functions
#include <ctype.h> // character manipulation functions
#define size 30


int freq_char(char[],char); // counts freq of char
void str_alpha(char[]);


int main()
{
    char str1[size],ch,*str2,str3[size];
     // str2 is  pointer of char (char str2[size] is equivalent to *str2)
    printf("Enter char\n");

    scanf("%c",&ch);

    printf("Enter String\n");

    scanf("%s",str1);

    printf("%s\n",str1);

    printf("Count of char:%d\n",freq_char(str1,ch));

    printf("Length:%d\n",strlen(str1));

    str2=strdup(str1);

    printf("Concatenated String:%s",strcat(str1,str2));

    strcpy(str2,"123abc+");

    str_alpha(str2);

    printf("\nAlpha str:%s\n",str2);

    strcpy(str2,"abcd****");

    printf("Sub str:%s\n",strncpy(str3,&str2[4],strlen(str2)-4));



}

int freq_char(char s[size],char a)
{
    int i=0,ctr=0;
    for(i=0;s[i]!='\0';i++) // or use for(i=0;i<strlen(s);i++)
    {
        if(s[i]==a)
            ctr++;
    }

    return ctr;
}

void str_alpha(char s[size])
{
    int i;

    for(i=0;i<strlen(s);i++)
        if(!isalpha(s[i]))
           s[i]=32;
}
