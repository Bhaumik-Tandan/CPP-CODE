#include <stdio.h>
struct b
{
    char id[30];
    float p,t;
    int n;
};
main()
{
    struct b a[5];
    int i;
    float t=0,s;
    for(i=0;i<5;i++)
    {
        scanf("%s",a[i].id);
        scanf("%d",&a[i].n);
        scanf("%f",&a[i].p);
        a[i].t=a[i].n*a[i].p;
    }
    for(i=0;i<5;i++)
    {
        s=((63.0)/100)*a[i].t;
        printf("%s %f\n",a[i].id,s);
        t+=s;
    }
    printf("%f",t);
}