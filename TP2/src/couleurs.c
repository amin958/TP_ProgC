#include <stdio.h>

struct Couleur {
    unsigned char r; // Rouge
    unsigned char g; // Vert (Green)
    unsigned char b; // Bleu
    unsigned char a; // Alpha (Transparence)
};

int main() {
    // Initialisation de nos 10 couleurs en Hexadécimal
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff}, // Couleur 1
        {0x2c, 0xc8, 0x64, 0xff}, // Couleur 2
        {0x00, 0x00, 0x00, 0xff}, // Noir
        {0xff, 0xff, 0xff, 0xff}, // Blanc
        {0xff, 0x00, 0x00, 0x80}, // Rouge semi-transparent
        {0x00, 0xff, 0x00, 0xff}, // Vert pur
        {0x00, 0x00, 0xff, 0xff}, // Bleu pur
        {0xaa, 0xbb, 0xcc, 0xff}, // Gris bleuté
        {0x12, 0x34, 0x56, 0xff}, // Couleur sombre
        {0xfa, 0xeb, 0xd7, 0xff}  // Blanc antique
    };

    // Affichage : on utilise %u pour afficher la valeur décimale de l'octet (de 0 à 255)
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %u\n", couleurs[i].r);
        printf("Vert : %u\n", couleurs[i].g);
        printf("Bleu : %u\n", couleurs[i].b);
        printf("Alpha : %u\n\n", couleurs[i].a);
    }

    return 0;
}