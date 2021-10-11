#include <stdio.h>

#include <stdio.h>
#include "fonctions.h"
#include "exercices.h"


int main() {
    printf("=====\tTPX : XXXXX\t=====\n");
    int choixExercice = 0;


    printf("Quel exercice voulez-vous lancer ?\n");


    do{
        scanf("%d", &choixExercice);
        switch (choixExercice) {
            case 1 :
                exercice1();
                break;
            case 2 :
                exercice2();
                break;
            case 3 :
                exercice3();
                break;
            case 0 :
                break;
            default : {
                printf("Choix Invalide ! Veuillez selectionner un exercice :\n");

                break;
            }
        }
    }while (choixExercice != 0); //Si choix == 0 on arrête !

    printf("Au revoir !\n");

    return 0;
}
