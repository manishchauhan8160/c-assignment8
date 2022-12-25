#include<stdio.h>
int main()
{
int i,j,m=5,n=5;
for(i=1;i<=9;i++)
{
for(j=1;j<=9;j++)
{
if(j>=m&&j<=n)
printf("*");
else
printf(" ");
}
if(i<5)
{
m--;
n++;
}
else
{
m++;
n--;
}
printf("\n");
}
}

