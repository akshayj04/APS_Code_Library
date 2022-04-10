#include <stdio.h>

typedef struct
{
    char Area[30];
    char City [30];
    int pincode;

}Address;

typedef struct
{
    int RN,Age;
    char Name [30];
    Address Adr;

}std_rec;

void read(std_rec[],int);
void display(std_rec[],int);
void display14(std_rec[],int);
void display_even(std_rec[],int);
void display_given(std_rec[],int);

int main()
{
    std_rec std_array[100];
    int n,r;
    printf("Enter size and data\n");
    scanf("%d",&n);

    read(std_array,n);
    display(std_array,n);
    display14(std_array,n);
    display_even(std_array,n);
    display_given(std_array,n);
    printf("Enter RN\n");
    scanf("%d",r)
    display_given(std_array,)


}

void read(std_rec S[100],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
      scanf("%d%d%s%s%s%d",&S[i].RN,&S[i].Age,S[i].Name,S[i].Adr.Area,S[i].Adr.City,&S[i].Adr.pincode);
  }
}

void display(std_rec S[100],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
     printf("%d%d%s%s%s%d",S[i].RN,S[i].Age,S[i].Name,S[i].Adr.Area,S[i].Adr.City,S[i].Adr.pincode);
  }
}

void display14(std_rec S[100],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
      if(S[i].Age==14)
      printf("%d%d%s%s%s%d",S[i].RN,S[i].Age,S[i].Name,S[i].Adr.Area,S[i].Adr.City,S[i].Adr.pincode);
  }
}

 void display_even(std_rec S[100],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
      if(S[i].RN%2==0)
      printf("%d%d%s%s%s%d",S[i].RN,S[i].Age,S[i].Name,S[i].Adr.Area,S[i].Adr.City,S[i].Adr.pincode);
  }
}

void display_given(std_rec S[],int n)
{
  int i,rx;
  for(i=0;i<n;i++)
  {
      if(S[i].RN==rx)
      printf("%d%d%s%s%s%d",S[i].RN,S[i].Age,S[i].Name,S[i].Adr.Area,S[i].Adr.City,S[i].Adr.pincode);
  }
}


