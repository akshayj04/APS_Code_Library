#include <stdio.h>
#define row 20
#define column 30
// if you declare functions seperately , do not leave column size blank
// e.g void read(int [][column],int m, int n);

void read(int a[row][column],int m,int n)
{
    int i,j;

  for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
}

void display(int a[row][column],int m,int n)
{
    int i,j;

  for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d  ",a[i][j]);
    }

    printf("\n");
}
}

void add(int c[row][column],int a[row][column],int b[row][column],int m,int n)
{
    int i,j;

  for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        c[i][j]=a[i][j]+b[i][j];

    }
}
}

int main() {

int m,n,a[row][column],b[row][column],c[row][column];

printf("Enter Size of Mat\n");

scanf("%d %d",&m,&n);

printf("\n");

read(a,m,n);
read(b,m,n);

add(c,a,b,m,n);

printf("\n");
display(a,m,n);
printf("\n");
display(b,m,n);
printf("\n");
display(c,m,n);


return 0;


}
