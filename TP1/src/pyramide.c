#include <stdio.h>

int main() {
    // Déclaration des variables comme demandé
    int n = 5; // Tu peux changer cette valeur pour faire une pyramide plus ou moins grande
    int i, j;

    // Boucle principale qui gère les lignes (les niveaux de la pyramide)
    for (i = 1; i <= n; i++) {
        
        // 1ère boucle interne : Les espaces
        // Si n=5 et qu'on est à la ligne 1, on veut 4 espaces (5 - 1)
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // 2ème boucle interne : Les nombres qui montent (de 1 jusqu'à i)
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // 3ème boucle interne : Les nombres qui descendent (de i-1 jusqu'à 1)
        // Par exemple, si on est à la ligne 3, i vaut 3. On affiche donc 2, puis 1.
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        
        // Fin de la ligne, on passe au niveau suivant
        printf("\n");
    }

    // Le petit message de fin obligatoire
    printf("Generation de la pyramide terminee.\n");

    return 0;
}
