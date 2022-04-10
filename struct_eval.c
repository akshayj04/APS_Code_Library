#include <stdio.h>
#define size 30

typedef struct
{
    int At_number;
    char Name[size];
    char Symbol[size];
    char Class[size];
    float At_weight;
    int Electron_config[7];
}element_t;

void scan_element(element_t[],int);
void print_element(element_t[],int);
void Min_weight(element_t[],int);

int main()
{
    element_t E_array[size];
    int n;

    printf("Enter the number of Elements\n");
    scanf("%d",&n);

    printf("\nEnter the data of the Elements:\n");

    scan_element(E_array,n);

    printf("\nPeriodic Table:\n");


    print_element(E_array,n);

    printf("\nName of element having lowest atomic weight:\n");

    Min_weight(E_array,n);

    return 0;


}

void scan_element(element_t E[size],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d%s%s%s%f%d%d%d%d%d%d%d",&E[i].At_number,E[i].Name,E[i].Symbol,E[i].Class,&E[i].At_weight,&E[i].Electron_config[0],&E[i].Electron_config[1],&E[i].Electron_config[2],&E[i].Electron_config[3],&E[i].Electron_config[4],&E[i].Electron_config[5],&E[i].Electron_config[6]);
    }
}

void print_element(element_t E[size],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d %s %s %s %.4f %d %d %d %d %d %d %d\n",E[i].At_number,E[i].Name,E[i].Symbol,E[i].Class,E[i].At_weight,E[i].Electron_config[0],E[i].Electron_config[1],E[i].Electron_config[2],E[i].Electron_config[3],E[i].Electron_config[4],E[i].Electron_config[5],E[i].Electron_config[6]);
    }
}

void Min_weight(element_t E[size], int n)
{
    int i;
    float m=E[0].At_weight;

    for(i=0;i<n;i++)
    {
        if(E[i].At_weight<m)
            m=E[i].At_weight;
    }

    for(i=0;i<n;i++)
    {
        if(E[i].At_weight==m)
            printf("%s",E[i].Name);
    }
}
