//
// Created by Escofet Pierre on 06/10/2021.
//
#include <stdio.h>
#include "fonctions.h"
#include "exercices.h"
#define TAILLE_MAX 100
#define NBR_COLONNES 4
#define NBR_LIGNES 3

void exercice1() {
    int choix=0;
    printf("Quelle fonction voulez-vous utiliser ? \n");
    scanf("%d", &choix)
    switch (choix)
    {
        case 1 :
        {
            saisirNombreRationnel();
            break;
        }
        case 2 :
        {
            NR nbr = saisirNombreRationnel();
            afficherNombreRationnel(nbr);
            break;
        }
        case 3 :
        {
            NR nbr1 = saisirNombreRationnel();
            NR nbr2 = saisirNombreRationnel();
            afficherNombreRationnel(multiplication(nbr1, nbr2));
            break;
        }
        case 4 :
        {
            NR nbr1 = saisirNombreRationnel();
            NR nbr2 = saisirNombreRationnel();
            afficherNombreRationnel(addition(nbr1, nbr2);
            break;
        }
        case 5 :
        {
            NR nbr = saisirNombreRationnel();
            afficherNombreRationnel(pgcd(nbr));
            break;
        }
        case 6 :
        {
            NR nbr = saisirNombreRationnel();
            afficherNombreRationnel(simplification(nbr));
            break;
        }


    }
}

void exercice2() {
    int tableau_entiers[TAILLE_MAX] = {0};
    int M = inserer(tableau_entiers);
    printf("L'élément le plus grand du tableau edt %d \n", eltmax(tableau_entiers, M));
}

void exercice3() {
    int tableau2D[NBR_LIGNES][NBR_COLONNES] = {{0}};
    inserer2D(tableau2D);
    int tableau1D[NBR_LIGNES*NBR_COLONNES] = {0};
    int i = 0, j=0;
    for (i=0; i<NBR_LIGNES; i++) {
        for (j=0; j < NBR_COLONNES; j++) {
            tableau1D[i*NBR_COLONNES + j] = tableau2D[i][j];
        }
    }
    int k = 0;
    printf("Votre nouveau tableau est :\n ");
    for (k=0; k<NBR_COLONNES*NBR_LIGNES; k++)
    {
        printf("%d ", tableau1D[k]);
    }


}