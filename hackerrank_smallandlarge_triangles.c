#include <stdio.h>
#include <math.h>
#define Size 100

typedef struct // tag name. it is optional
{

    int a,b,c;
    float area;
}Triangle;

void Read(Triangle[],int);
void Display(Triangle[],int);
void Display_area(Triangle[],int);
void cal_area(Triangle[],int);
void Bubble_sort(Triangle[],int);
void swap(Triangle[],int,int);

int main()
{

Triangle T_arr[Size];
int n;

printf("Enter the size and data\n");
scanf("%d",&n);
Read(T_arr,n);

printf("Data of Triangles is:\n");
Display(T_arr,n);

cal_area(T_arr,n);
Bubble_sort(T_arr,n);


printf("Data of sorted Triangles is:\n");
Display_area(T_arr,n);

}

void Read(Triangle T[Size],int m)
{
    int i;
    for(i=0;i<m;i++)
        scanf("%d%d%d",&T[i].a,&T[i].b,&T[i].c);
}


void Display(Triangle T[Size],int m)
{
    int i;
    for(i=0;i<m;i++)
        printf("%d %d %d\n",T[i].a,T[i].b,T[i].c);
}

void Display_area(Triangle T[Size],int m)
{
    int i;
    for(i=0;i<m;i++)
        printf("%d %d %d %f\n",T[i].a,T[i].b,T[i].c,T[i].area);
}


void cal_area(Triangle T[Size],int m)

{
    int i;
    float p;

    for(i=0;i<m;i++)
    {
        p=(T[i].a+T[i].b+T[i].c)/2;
        T[i].area=sqrt(p*(p-T[i].a)*(p-T[i].b)*(p-T[i].c));
    }
}

void Bubble_sort(Triangle T[Size],int m)
{
    int i,j;

    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-1-i;j++)
        {
            if(T[j].area>T[j+1].area)
                swap(T,j,j+1);
        }
    }
}
void swap(Triangle T[Size],int i,int j)
{
    Triangle t;
    t=T[i];
    T[i]=T[j];
    T[j]=t;
}









