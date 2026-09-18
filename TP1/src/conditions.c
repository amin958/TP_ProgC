#include <stdio.h>

int main() {
    int somme = 0;

    // Boucle for pour parcourir les nombres de 1 à 1000
    for (int i = 1; i <= 1000; i++) {
        
        // Si le nombre est divisible par 11, on passe directement au suivant
        if (i % 11 == 0) {
            continue; // Ignore le reste de la boucle et passe à l'itération suivante (i+1)
        }

        // Si le nombre est divisible par 5 OU par 7
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i; // Équivalent à : somme = somme + i;
        }

        // Si la somme dépasse 5000, on arrête tout immédiatement
        if (somme > 5000) {
            printf("La somme a depasse 5000 au nombre %d.\n", i);
            break; // Casse la boucle for et passe à la suite du programme
        }
    }

    // Affichage du résultat final
    printf("La somme finale est : %d\n", somme);

    return 0;
}