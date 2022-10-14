#include <stdio.h>
int main()
{
    float d1, d2, d3;
    printf("Enter d1 -> ");
    scanf("%f", &d1);

    printf("Enter d2 -> ");
    scanf("%f", &d2);

    printf("Enter d3 -> ");
    scanf("%f", &d3);

    if (d1 > d2 && d1 > d3)
    {
        if (d2 > d3)
            printf("%.2f\n",d1-d3);
        else
            printf("%.2f\n",d1-d2);
    }

    if (d3 > d2 && d2 > d1)
    {
        if (d2 > d1)
            printf("%.2f\n",d3-d1);
        else
            printf("%.2f\n",d3-d2);
    }

    if (d2 > d1 && d2 > d3)
    {
        if (d1 > d3)
            printf("%.2f\n",d3/d1);
        else
            printf("%.2f\n",d1/d3);
    }

    return 0;
}
