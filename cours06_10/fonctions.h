//
// Created by Escofet Pierre on 06/10/2021.
//

#ifndef COURS06_10_FONCTIONS_H
#define COURS06_10_FONCTIONS_H
#define NBR_COLONNES 4
#define NBR_LIGNES 3

typedef struct {
    int numerateur, denominateur;
}  NR;

NR saisirNombreRationnel();
void afficherNombreRationnel(NR nbr);
NR multiplication(NR nbr1, NR nbr2);
NR addition(NR nbr1, NR nbr2);
int pgcd(NR nbr);
NR simplification(NR nbr);
int inserer(int tableau_entiers[]);
int eltmax(int tableau_entiers[], int M);
void inserer2D(int tableau_entiers[NBR_LIGNES][NBR_COLONNES]);

#endif //COURS06_10_FONCTIONS_H
