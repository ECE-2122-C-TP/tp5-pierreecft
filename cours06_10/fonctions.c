//
// Created by Escofet Pierre on 06/10/2021.
//
#include <stdio.h>
#include "fonctions.h"
#define TAILLE_MAX 100
#define NBR_COLONNES 4
#define NBR_LIGNES 3

void afficherNombreRationnel(NR nbr) {
    int a,b;
    a=nbr.numerateur;
    b=nbr.denominateur;
    printf("Votre nombre rationnel edt %d/%d", a,b);
}


NR saisirNombreRationnel() {
    NR nbr;
    printf("Que vaut votre numerateur et denominateur ? \n");
    scanf("%d %d",&nbr.numerateur, &nbr.denominateur);
    return nbr;
}

NR multiplication(NR nbr1, NR nbr2) {
    NR nbr3;
    nbr3.numerateur = nbr1.numerateur*nbr2.numerateur;
    nbr3.denominateur = nbr1.denominateur*nbr2.denominateur;
    return nbr3;
}

NR addition(NR nbr1, NR nbr2) {
    NR nbr3;
    nbr3.numerateur = nbr1.numerateur*nbr2.denominateur + nbr2.numerateur*nbr1.denominateur;
    nbr3.denominateur = nbr2.numerateur*nbr2.denominateur;
    return nbr3;
}
int pgcd(NR nbr) {
    while (nbr.numerateur != nbr.denominateur) {
        if (nbr.numerateur < nbr.denominateur) {
            nbr.denominateur = nbr.denominateur - nbr.numerateur;
        }
        else {
        nbr.numerateur = nbr.numerateur - nbr.denominateur;
        }
    }
    return nbr.numerateur;
}
NR simplification(NR nbr) {
    int nouveau_numerateur, nouveau_denominateur;
    nouveau_numerateur = nbr.numerateur / pgcd(nbr);
    nouveau_denominateur = nbr.denominateur / pgcd(nbr);
    NR nouveau_nombre = {nouveau_numerateur, nouveau_denominateur};
}


int inserer(int tableau_entiers[]) {
    int N = 0;
    printf("Saisir le nombre N d'entiers à insérer : \n");
    scanf("%d", &N);
    while (N > TAILLE_MAX) {
        printf("ERROR, saisir à nouveau un nombre N");
        scanf("%d", &N);
    }
    printf("Entrer les entiers : \n ");
    for (int i = 0; i <N; i++) {
        scanf("%d", &tableau_entiers[i]);
    }
    return N;
}

int eltmax(int tableau_entiers[], int M) {
    int i = 1, max = tableau_entiers[0];
    for (i=1; i < M; i++) {
        if (tableau_entiers[i]>max)
        {
            max=tableau_entiers[i];
        }
    }
    return max;
}

void inserer2D(int tableau_entiers[NBR_LIGNES][NBR_COLONNES]) {
    int i = 0, j = 0;
    for (i = 0; i < NBR_LIGNES; i++) {
        printf("Veuillez saisir les entiers de la ligne %d :", i + 1);
        for (j = 0; j < NBR_COLONNES; j++) {
            scanf("%d", &tableau_entiers[i][j]);
        }
    }
}