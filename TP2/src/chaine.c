#include <stdio.h>

int main() {
    char chaine1[100] = "Hello";
    char chaine2[] = " World!";
    char copie[100];

    // 1. Calculer la longueur
    int len = 0;
    while (chaine1[len] != '\0') {
        len++;
    }
    printf("Longueur de chaine1 : %d\n", len);

    // 2. Copier la chaîne
    int i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0'; // Ne jamais oublier le caractère de fin !
    printf("Copie de chaine1 : %s\n", copie);

    // 3. Concaténer (Ajouter chaine2 à la fin de chaine1)
    int j = 0;
    while (chaine2[j] != '\0') {
        // On commence à écrire à partir de l'index 'len' (la fin de chaine1)
        chaine1[len + j] = chaine2[j];
        j++;
    }
    chaine1[len + j] = '\0'; // Toujours clore la nouvelle chaîne
    printf("Concatenation : %s\n", chaine1);

    return 0;
}