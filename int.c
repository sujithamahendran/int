#include<stdio.h>
#include<conio.h>
int main()
{
int a[6]={1,2,3,4,5,6};

for(i=0;i<=6;i++)
{
if(a[i]<a[i+1])
{
i++;
}
else
printf("they are not sorted");
}
printf("they are sorted");
return 0;
}
