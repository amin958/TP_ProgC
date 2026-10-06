#include <stdio.h>
#include <string.h>

// Définition de notre "boîte" Etudiant
struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_c;
    float note_os;
};

int main() {
    // Création d'un tableau de 5 "boîtes"
    struct Etudiant classe[5];

    // Initialisation du 1er étudiant avec strcpy pour les textes
    strcpy(classe[0].nom, "Dupont");
    strcpy(classe[0].prenom, "Marie");
    strcpy(classe[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    classe[0].note_c = 16.5;
    classe[0].note_os = 12.1;

    strcpy(classe[1].nom, "Martin");
    strcpy(classe[1].prenom, "Pierre");
    strcpy(classe[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    classe[1].note_c = 14.0;
    classe[1].note_os = 14.1;

    // Je raccourcis l'initialisation des 3 autres pour l'exemple
    for(int i = 2; i < 5; i++) {
        strcpy(classe[i].nom, "NomDefaut");
        strcpy(classe[i].prenom, "PrenomDefaut");
        strcpy(classe[i].adresse, "AdresseDefaut");
        classe[i].note_c = 10.0;
        classe[i].note_os = 10.0;
    }

    // Affichage
    for(int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", classe[i].nom);
        printf("Prenom : %s\n", classe[i].prenom);
        printf("Adresse : %s\n", classe[i].adresse);
        printf("Note 1 : %.1f\n", classe[i].note_c);
        printf("Note 2 : %.1f\n\n", classe[i].note_os);
    }

    return 0;
}