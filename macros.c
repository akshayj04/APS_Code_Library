#include <stdio.h>
#define Max 20
#define PI 3.142
#define print printf
#undef Max
#define Max 200
#define Circle_Area(x) (PI)*(x)*(x)


int main()
{
    int x;

    const min=-1;

    scanf("%d",&x);

    //Max=Max+1;

    if(x>Max)
        print("%d\n",x);
    else
    {
        x=Max+1+min;
        print("%d\n",x);
    }

    print("Area=%.2f\n",Circle_Area(x));

    print("Area=%.2f",Circle_Area(x+5));

    return 0;
}

