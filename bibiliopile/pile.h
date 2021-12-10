#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED

struct pile
{
    float t[50];
    int taille ;
};
typedef struct pile pile;

int estvide(pile *p);
void depiler(pile *p,float x);
void empiler (pile *p,float x);
void pilevide(pile *p);
void sommet ( pile *p,float x);

#endif // PILE_H_INCLUDED
