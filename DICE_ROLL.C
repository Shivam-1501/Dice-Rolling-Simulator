#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c=1;
printf("	DICE ROLLING SIMULATOR		");
while(c==1)
{
printf("1.Roll the dice\n");
printf("2.Exit\n");
printf("Enter your choice:");
scanf("%d",&b);
switch(b)
{
case 1:
a=(rand()%6)+1;
printf("%d\n",a);
break;
case 2:
c=0;
printf("Exiting the program....\n");
break;
}
}
return 0;
}
