#include<ctype.h>
#include<stdio.h>
main()
{ int nbv,nbc;
char c;
nbv=0;
nbc=0;
do {
printf(" saisir une suite de caractère ");
printf("%c",&c);
c= tolower(c);
 if ((c>'a')&&(c<'z'))
{
    if (c ==('a'||'o'||'y'||'i'||'u'||'e'))
nbv ++;
else
nbc ++;
}
}
 while (c!=' ');
printf("nbv \n",nbv);
printf("nbc",nbc);

}
