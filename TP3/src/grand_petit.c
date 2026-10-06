#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    srand(time(NULL)); // Initialise l'aléatoire

    // 1. Remplissage du tableau avec des nombres entre 1 et 1000
    for(int i = 0; i < 100; i++) {
        tab[i] = (rand() % 1000) + 1;
    }

    // 2. Initialisation du min et du max avec la première valeur
    int max = tab[0];
    int min = tab[0];

    // 3. Parcours du tableau pour mettre à jour
    for(int i = 1; i < 100; i++) {
        if(tab[i] > max) {
            max = tab[i];
        }
        if(tab[i] < min) {
            min = tab[i];
        }
    }

    printf("Le numero le plus grand est : %d\n", max);
    printf("Le numero le plus petit est : %d\n", min);

    return 0;
}