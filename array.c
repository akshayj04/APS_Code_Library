#include <stdio.h>
#define Size 5

int main()

{
   int std_rn[Size],i;

   unsigned char arr1[]={10,20,30,40,50};

   unsigned char arr2[]={010,077,023,045,057};

   unsigned char arr3[]={0x10,0xAA,0X67,0xA1,0xFF};

   printf("Decimal Array\n");
   for(i=0;i<Size;i++)
            printf("%4d\n",arr1[i]);

    printf("Octal Array\n");
   for(i=0;i<Size;i++)
            printf("%4o\n",arr2[i]);

    printf("Hex Array\n");
   for(i=0;i<Size;i++)
            printf("%4X\n",arr3[i]);






 /*  for(i=0;i<Size;i++)
            scanf("%d",&std_rn[i]);

   printf("\n");

   for(i=0;i<Size;i++)
            printf("%d\n",std_rn[i]);

    return 0; */


}
