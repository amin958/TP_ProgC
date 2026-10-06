#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    srand(time(NULL));

    printf("Tableau :\n");
    for(int i = 0; i < 100; i++) {
        tab[i] = (rand() % 100) + 1; // 1 à 100
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    int cible;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &cible); // On lit l'entrée clavier de l'utilisateur

    // Recherche linéaire
    int trouve = 0; // Agit comme un booléen (0 = faux, 1 = vrai)
    for(int i = 0; i < 100; i++) {
        if(tab[i] == cible) {
            trouve = 1;
            break; // On a trouvé, inutile de chercher plus loin
        }
    }

    if(trouve == 1) {
        printf("\nResultat : entier present\n");
    } else {
        printf("\nResultat : entier absent\n");
    }

    return 0;
}