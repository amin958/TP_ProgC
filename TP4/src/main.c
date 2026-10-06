#include <stdio.h>
#include "operator.h" // On inclut notre propre bibliothèque

int main() {
    int num1, num2;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);
    
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    
    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); // L'espace avant %c est crucial pour ignorer les sauts de ligne précédents

    printf("Resultat : ");
    switch(op) {
        case '+': printf("%d\n", somme(num1, num2)); break;
        case '-': printf("%d\n", difference(num1, num2)); break;
        case '*': printf("%d\n", produit(num1, num2)); break;
        case '/': printf("%d\n", quotient(num1, num2)); break;
        case '%': printf("%d\n", modulo(num1, num2)); break;
        case '&': printf("%d\n", et(num1, num2)); break;
        case '|': printf("%d\n", ou(num1, num2)); break;
        case '~': 
            // Cas particulier pour la négation (unaire)
            printf("~%d = %d et ~%d = %d\n", num1, negation(num1), num2, negation(num2)); 
            break;
        default: printf("Operateur invalide.\n"); break;
    }
    return 0;
}
