#include <stdio.h>

int main() {
    // Déclaration et remplissage des tableaux parallèles
    char noms_prenoms[5][50] = {"Dupont Marie", "Martin Pierre", "Durand Alice", "Leroy Paul", "Moreau Sophie"};
    char adresses[5][100] = {"20, Blvd Niels Bohr, Lyon", "22, Blvd Niels Bohr, Lyon", "Paris", "Marseille", "Lille"};
    float notes_c[5] = {16.5, 14.0, 15.5, 10.0, 12.0};
    float notes_os[5] = {12.1, 14.1, 13.5, 11.0, 16.0};

    // Affichage avec une boucle for
    for (int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom et prenom : %s\n", noms_prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en C : %.1f\n", notes_c[i]);
        printf("Note en OS : %.1f\n\n", notes_os[i]);
    }

    return 0;
}