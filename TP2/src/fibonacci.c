#include <stdio.h>

int main() {
    int n = 7;
    int u0 = 0, u1 = 1, un;

    printf("Suite de Fibonacci jusqu'a U%d : ", n);
    
    // On affiche directement les deux premiers pour démarrer
    printf("%d, %d", u0, u1);

    // On commence la boucle à 2, puisqu'on a déjà affiché U0 et U1
    for (int i = 2; i <= n; i++) {
        un = u0 + u1; // Formule de Fibonacci
        printf(", %d", un);
        
        // On décale nos variables pour le prochain tour
        u0 = u1;
        u1 = un;
    }
    
    printf("\n");

    return 0;
}