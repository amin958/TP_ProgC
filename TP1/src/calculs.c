#include <stdio.h>

int main() {
    // Déclaration et affectation des variables
    int num1 = 15;
    int num2 = 4;
    
    // Change la valeur de 'op' pour tester les différents cas
    // Valeurs possibles : '+', '-', '*', '/', '%', '&', '|', '~'
    char op = '+'; 

    printf("--- Calculatrice --- \n");
    printf("Valeurs : num1 = %d, num2 = %d, operateur = '%c'\n\n", num1, num2, op);

    // Structure switch pour déterminer l'opération
    switch (op) {
        case '+':
            printf("Resultat de %d + %d = %d\n", num1, num2, num1 + num2);
            break; // Le break est indispensable pour ne pas exécuter les cas suivants
            
        case '-':
            printf("Resultat de %d - %d = %d\n", num1, num2, num1 - num2);
            break;
            
        case '*':
            printf("Resultat de %d * %d = %d\n", num1, num2, num1 * num2);
            break;
            
        case '/':
            // Sécurité : on empêche la division par zéro
            if (num2 != 0) {
                printf("Resultat de %d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Erreur : Division par zero impossible.\n");
            }
            break;
            
        case '%':
            // Sécurité : on empêche le modulo par zéro
            if (num2 != 0) {
                printf("Resultat de %d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Erreur : Modulo par zero impossible.\n");
            }
            break;
            
        case '&':
            // ET binaire (Bitwise AND)
            printf("Resultat de %d & %d = %d\n", num1, num2, num1 & num2);
            break;
            
        case '|':
            // OU binaire (Bitwise OR)
            printf("Resultat de %d | %d = %d\n", num1, num2, num1 | num2);
            break;
            
        case '~':
            // NON binaire (Bitwise NOT) - Opérateur unaire
            printf("Resultat de ~%d = %d\n", num1, ~num1);
            printf("Resultat de ~%d = %d\n", num2, ~num2);
            break;
            
        default:
            // Si le caractère ne correspond à aucun 'case' au-dessus
            printf("Erreur : Operateur '%c' non reconnu.\n", op);
            break;
    }

    return 0;
}
