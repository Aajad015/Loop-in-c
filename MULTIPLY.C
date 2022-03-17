#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter the Number \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
//printf("%d*%d=%d\n",n*i);
printf("%d*%d=%d\n",i,n,n*i);
}
getch();
}