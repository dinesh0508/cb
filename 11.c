#include<stdio.h>
void main()
{
int a,n,i,j;
int count=0;
printf("\n Enter value=");
scanf("%d",&a);
n=2*a;
for(i=1;i<n;i++)
{
for(j=i+1;j<=n;j++)
{
printf("(%d,%d)\n",i,j);
count++;
}
}
printf("No of paires =%d",count);
}
