#include <stdio.h>

int main() {
    // Le tableau contenant les 5 nombres à tester demandés dans l'exercice
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nb_valeurs = 5; // Nombre d'éléments dans le tableau

    printf("--- Conversion en Binaire ---\n\n");

    // Boucle pour parcourir nos 5 nombres à tester
    for (int k = 0; k < nb_valeurs; k++) {
        int n = nombres[k];
        
        printf("%5d = ", n);

        // Cas particulier : si le nombre est 0, on affiche juste 0
        if (n == 0) {
            printf("0\n");
            continue; // Passe au nombre suivant
        }

        int binaire[32]; // Un tableau pour stocker les bits (un entier fait 32 bits max)
        int index = 0;
        int temp = n;

        // On boucle tant que le nombre n'est pas tombé à zéro
        for (; temp > 0; ) {
            // temp & 1 est la version "manipulation de bits" de temp % 2
            binaire[index] = temp & 1; 
            
            // temp >> 1 (décalage à droite) est la version "bits" de temp / 2
            temp = temp >> 1; 
            
            index++;
        }

        // On affiche les chiffres stockés, mais à l'envers (du dernier entré au premier)
        for (int i = index - 1; i >= 0; i--) {
            printf("%d", binaire[i]);
        }
        
        printf("\n"); // Retour à la ligne pour le nombre suivant
    }

    return 0;
}