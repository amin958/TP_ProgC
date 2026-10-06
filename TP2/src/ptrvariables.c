#include <stdio.h>

int main() {
    // Initialisation
    int i = 0xa47865ff;
    float f = 2.0f; // En mémoire, 2.0f vaut 0x40000000

    // Déclaration des pointeurs
    int *pi = &i;
    float *pf = &f;

    printf("Avant la manipulation :\n");
    // %p affiche l'adresse. %x affiche la valeur en hexadécimal.
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)pi, *pi);
    printf("Adresse de f : %p, Valeur de f : %x\n\n", (void*)pf, *(unsigned int*)pf);

    // Manipulation VIA les pointeurs (on modifie la valeur là où pointe l'adresse)
    *pi = 0xa47865fe;
    *pf = 1.0f; // En mémoire, 1.0f vaut 0x3f800000

    printf("Apres la manipulation :\n");
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)pi, *pi);
    printf("Adresse de f : %p, Valeur de f : %x\n", (void*)pf, *(unsigned int*)pf);

    return 0;
}