#include "personne.h"
#include <stdio.h>
#include <stdlib.h>

int menuDemande(void){
    int choix;
    printf("Faite votre choix\n-1 Ajouter une demande\nVotre choix :");

    scanf("%d",&choix);
    return choix;
}

void ajouterDemande(void){
    Personne newPersonne;

    newPersonne.prenom = (char*) malloc (sizeof(char));
    newPersonne.nom= (char*) malloc (sizeof(char));

    printf("Entrez le prenom de la personne :");
    scanf("%s",newPersonne.prenom);
    printf("Entrez le nom de la personne :");
    scanf("%s",newPersonne.nom);

    affichPersonne(newPersonne);
}

void affichPersonne(Personne p){
    printf("Prenom : %s, nom : %s",p.prenom,p.nom);
}