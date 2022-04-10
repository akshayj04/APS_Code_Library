#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define row 10
#define col 10

void read(int[][col],int);
void display(int[][col],int);
int pri_sum(int[][col],int);
int sec_sum(int[][col],int);

int main()

{ int N,a[row][col],sum1,sum2;

  printf("Enter the size of the Square matrix\n");
  scanf("%d",&N);

  read(a,N);
  printf("\n");
  display(a,N);
  printf("\n");

  sum1=pri_sum(a,N);
  printf("Pri sum : %d\n",sum1);

  sum2=sec_sum(a,N);
  printf("Sec sum : %d\n",sum2);

  printf("The absolute difference : %d",abs(sum1-sum2));









}

void read(int a[row][col],int N)
{
    int i,j;

  for(i=0;i<N;i++)
{
    for(j=0;j<N;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
}

void display(int a[row][col],int N)
{
    int i,j;

  for(i=0;i<N;i++)
{
    for(j=0;j<N;j++)
    {
        printf("%d  ",a[i][j]);
    }

    printf("\n");
}
}

int pri_sum(int a[row][col],int N)
{
    int i,sum=0;

    for(i=0;i<N;i++)
        sum+=a[i][i];

    return sum;
}

int sec_sum(int a[row][col],int N)
{
    int i,sum=0,m=N-1;

    for(i=0;i<N;i++,m--)
    {
        sum+=a[i][m];
        // m--;
    }

    return sum;
}
