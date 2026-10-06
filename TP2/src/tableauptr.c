#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab_i[11];
    float tab_f[11];

    // Pointeurs qui pointent sur la première case des tableaux
    int *pi = tab_i;
    float *pf = tab_f;

    // Initialisation du générateur aléatoire
    srand(time(NULL));

    // 1. Remplissage avec des pointeurs
    for (int k = 0; k < 11; k++) {
        *(pi + k) = rand() % 100 + 1;                  // Valeurs de 1 à 100
        *(pf + k) = (rand() % 1000) / 10.0f;           // Valeurs à virgule aléatoires
    }

    // 2. Affichage AVANT
    printf("Tableau d'entiers (avant) :\n");
    for (int k = 0; k < 11; k++) {
        printf("%d ", *(pi + k));
    }
    printf("\n\nTableau de flottants (avant) :\n");
    for (int k = 0; k < 11; k++) {
        printf("%.2f ", *(pf + k));
    }

    // 3. Multiplication par 3 pour les index pairs (divisibles par 2)
    for (int k = 0; k < 11; k++) {
        if (k % 2 == 0) {
            *(pi + k) = *(pi + k) * 3;
            *(pf + k) = *(pf + k) * 3.0f;
        }
    }

    // 4. Affichage APRÈS
    printf("\n\n-----------------\n\n");
    printf("Tableau d'entiers (apres) :\n");
    for (int k = 0; k < 11; k++) {
        printf("%d ", *(pi + k));
    }
    printf("\n\nTableau de flottants (apres) :\n");
    for (int k = 0; k < 11; k++) {
        printf("%.2f ", *(pf + k));
    }
    printf("\n");

    return 0;
}