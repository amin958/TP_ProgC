#include <stdio.h>

int main() {
    int a = 2;
    int b = 3;
    long long resultat = 1; // On utilise long long au cas où le résultat serait très grand

    // On multiplie "resultat" par "a", et ce "b" fois de suite
    for (int i = 0; i < b; i++) {
        resultat = resultat * a;
    }

    printf("%d a la puissance %d = %lld\n", a, b, resultat);

    return 0;
}