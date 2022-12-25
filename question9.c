#include<stdio.h>
int main()
{
int x,i,j;
for(i=1;i<=4;i++)
{
x=1;
for(j=1;j<=7;j++)
{
if(j>=i&&j<=8-i)
{
printf("%d",x);
j<4?x++:x--;
}
else
    printf(" ");
}
printf("\n");
}
}
