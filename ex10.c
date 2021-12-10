#include<stdio.h>
main()
{ int n,u1,u2,u,i;

printf("donner le rang de la valeur de la suite c \n ");
scanf("%d",n);
if( n==1 || n==2)
printf(1);
else;
{u2=1;
u1=1;
i=3;
while( i>n)
u=u2-u1;
u1=u2;
u2=u;
i++;
}
printf(u);
}
