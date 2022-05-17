#include "personne.h"
#include <stdio.h>

void mainMenu(void){
    int choix;
    printf("Faites votre choix\n1- Demande logement\nVotre choix :");

    scanf("%d",&choix);

    if(choix == 1){
        printf("\n\n-------\n\n\n");
        int sousMenu = menuDemande();
        if(sousMenu == 1){ajouterDemande();}
    }
}

int main(void){
    mainMenu();
    return 0;
}