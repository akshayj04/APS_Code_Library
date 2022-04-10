#include <stdio.h>
#define Size 100

typedef struct Box_rec // tag name. it is optional
{

    int length,width,height;
}Box;

void Read(Box[],int);
void Display(Box[],int);
int cal_vol(Box);

int main()
{

Box B_arr[Size];
int n,i;

printf("Enter the size and data\n");
scanf("%d",&n);
Read(B_arr,n);

printf("Data of Boxes is:\n");
Display(B_arr,n);

for(i=0;i<n;i++)
{
    if(B_arr[i].height<41)
        printf("%d\n",cal_vol(B_arr[i]));
}
}

void Read(Box B[Size],int m)
{
    int i;
    for(i=0;i<m;i++)
        scanf("%d%d%d",&B[i].length,&B[i].width,&B[i].height);
}

void Display(Box B[Size],int m)
{
    int i;
    for(i=0;i<m;i++)
        printf("%d %d %d\n",B[i].length,B[i].width,B[i].height);
}

int cal_vol(Box X)
{
    return (X.length*X.width*X.height);
}






