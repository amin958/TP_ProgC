#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    srand(time(NULL));

    printf("Tableau non trie :\n");
    for(int i = 0; i < 100; i++) {
        // Nombres aléatoires entre -50 et 50 pour coller à ton exemple
        tab[i] = (rand() % 101) - 50; 
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // Algorithme du Tri à bulles
    for(int i = 0; i < 100 - 1; i++) {
        for(int j = 0; j < 100 - i - 1; j++) {
            // Si la case actuelle est plus grande que la suivante, on échange
            if(tab[j] > tab[j+1]) {
                int temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }

    printf("Tableau trie par ordre croissant :\n");
    for(int i = 0; i < 100; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}