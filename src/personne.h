typedef struct Maillon Maillon;

typedef struct{
    char* prenom;
    char* nom;
}Personne;  

typedef struct{
    Personne p;
    Maillon * suivant;
    Maillon * precedant;
}MaillonDemande;

typedef struct{
    Maillon * tete;
    Maillon * queu;
}ListDemande;


int menuDemande(void);
void ajouterDemande(void);
void affichPersonne(Personne p);