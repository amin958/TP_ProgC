#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    srand(time(NULL));

    // Création d'un tableau directement trié (on ajoute un nombre aléatoire à la case précédente)
    tab[0] = rand() % 5;
    printf("Tableau trie :\n");
    printf("%d ", tab[0]);
    for(int i = 1; i < 100; i++) {
        tab[i] = tab[i-1] + (rand() % 3) + 1; 
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    int cible;
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &cible);

    // Algorithme de Recherche Dichotomique
    int gauche = 0;
    int droite = 99;
    int trouve = 0;

    while(gauche <= droite) {
        int milieu = (gauche + droite) / 2;

        if(tab[milieu] == cible) {
            trouve = 1;
            break;
        } 
        else if(tab[milieu] < cible) {
            // C'est plus grand, on coupe la moitié gauche
            gauche = milieu + 1;
        } 
        else {
            // C'est plus petit, on coupe la moitié droite
            droite = milieu - 1;
        }
    }

    if(trouve == 1) {
        printf("\nResultat : entier present\n");
    } else {
        printf("\nResultat : entier absent\n");
    }

    return 0;
}