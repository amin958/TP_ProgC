#include <stdio.h>

int main() {
    // Prenons une valeur de test où les bits 28 et 12 sont à 1 (soit 0x10001000 en Hexa)
    unsigned int d = 0x10001000; 

    // Taille d'un entier en bits (généralement 4 octets * 8 = 32 bits)
    int taille_bits = sizeof(d) * 8;

    // Pour extraire un bit, on décale le nombre vers la droite (>>) 
    // puis on fait un ET logique (& 1) pour l'isoler.
    int bit_4 = (d >> (taille_bits - 4)) & 1;
    int bit_20 = (d >> (taille_bits - 20)) & 1;

    // Vérification
    if (bit_4 == 1 && bit_20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}