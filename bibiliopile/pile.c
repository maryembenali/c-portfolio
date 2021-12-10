
#define
max 50
struct pile
{
    float t[50];
    int taille ;
};
typedef struct pile pile;

int estvide(pile *p)
{
    if ( p->taille==0)
        return 0;
    else
        return 1;
}
void depiler(pile *p,float x)
{
    x=p->t[p->taille];
        p->taille-=1;
}

void empiler (pile *p,float x)
{
    if (p->taille==max)
        printf("la pile est pleine impossible d'empiler");
    else
        {p->t[p->taille+1]=x;
        p->taille+=1;}


}
void pilevide(pile *p)
{
    p->taille=0;
}
void sommet ( pile *p,float x)
{
    x=p->t[p->taille];
}

