#include<stdio.h>
#include <stdlib.h>
struct n
{
 int b;
 int a;
 int n;
 int p;
 int e;
};
typedef struct n sn;
int main()
{
 sn *a,t,*b;
 int n,i,j,s,lk;
 printf("(19BIT0296) Enter the number of processes: ");
 scanf("%d",&n);
 a=(sn*)malloc(n*sizeof(sn));
 b=(sn*)malloc(n*sizeof(sn));
 for(i=0;i<n;i++)
 {
 printf("Enter the burst time for process %d: ",i+1);
 scanf("%d",&a[i].b);
 printf("Enter the arrival time for process %d: ",i+1);
 scanf("%d",&a[i].a);
 printf("Enter the priority for process %d: ",i+1);
 scanf("%d",&a[i].a);
 a[i].n=i+1;
 a[i].e=0;
 }
//used bubble sort because it is stable
 for (i=0;i<n-1;i++)
 for (j = 0; j < n-i-1; j++)
 if (a[j].a>a[j+1].a)
 {
 t=a[j];
 a[j]=a[j+1];
 a[j+1]=t;
 }
 s=a[0].a;
 printf("\n Process No.\t Burst Time\tWaiting Time\t Arrival Time\t Turn around Time\n");
 for(j=0;j<n;j++)
 {
     int i=0,d=0,jk;
     while(i<n)
     if(a[i].a<s)
     i++;
     for(lk=0;lk<i;lk++)
     if(a[lk].e==0)
     b[d++]=a[lk];
     for (i=0;i<lk-1;i++)
 for (jk = 0; jk < d-i-1; jk++)
 if (b[jk].a<b[jk+1].a)
 {
 t=b[j];
 b[j]=b[j+1];
 b[j+1]=t;
 }
 b[0].e=1;
 for (i=0;i<n;i++)
 {
 if(a[i].e==0)
 a[i].p=(a[i].p)-b[0].b;//reduces priority
 if(b[0].n==a[i].n)
 a[i].e=1;
 }
s+=b[0].b;
    printf("\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",b[0].n,b[0].b,s-b[0].a,b[0].a,s-b[0].a);

 }
}