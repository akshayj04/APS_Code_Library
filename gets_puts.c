#include <stdio.h>
#define size 100

int count_vowels(char[]);

int main()

{
char str[size];

printf("Enter the Sentence\n");

gets(str);
puts(str);

printf("Vowels:%d",count_vowels(str));




}

int count_vowels(char s[size])
{

 int i,ctr=0;

 for(i=0;s[i]!='\0';i++)
{
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='U'||s[i]=='O')
        ctr++;
}

 return ctr;

}
