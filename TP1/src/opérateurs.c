#include <stdio.h>

int main() {
    // Déclaration et affectation des variables
    int a = 16;
    int b = 3;
    
    printf("--- Variables ---\n");
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    // Opérateurs arithmétiques
    printf("--- Operations arithmetiques ---\n");
    
    // Addition
    printf("Addition (a + b) : %d\n", a + b);
    
    // Soustraction
    printf("Soustraction (a - b) : %d\n", a - b);
    
    // Multiplication
    printf("Multiplication (a * b) : %d\n", a * b);
    
    // Division
    // Note : Comme a et b sont des entiers, il s'agit d'une division entière (le reste est ignoré).
    printf("Division (a / b) : %d\n", a / b);
    
    // Modulo
    // Note : Pour afficher le symbole % avec printf, il faut l'écrire en double (%%).
    printf("Modulo (a %% b) : %d\n\n", a % b);

    // Opérateurs logiques / comparaison
    printf("--- Operations de comparaison (0 = Faux, 1 = Vrai) ---\n");
    
    // Égalité
    printf("a est egal a b (a == b) : %d\n", a == b);
    
    // Supériorité
    printf("a est superieur a b (a > b) : %d\n", a > b);

    return 0;
}

