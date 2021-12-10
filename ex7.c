#include<stdio.h>
main()
{

int i,s,x=1,p;
s=0;
p=1;
i=0;


for( ; x !=0 ; )
{
    printf("saisir un chiffre \n");
    scanf("%d",&x);
     if(x>=1 && x<=9)
     {
         s+=x;
         p *=x;
         i++;
     }
}

printf("la somme de la suite des chiffre est %d , le produit est %d et la moyenne est %f",s,p,s/(float)i);

}
