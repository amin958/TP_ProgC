#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structure d'une couleur
struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

// Nouvelle structure pour stocker les doublons
struct CouleurCompteur {
    struct Couleur c;
    int count;
};

int main() {
    struct Couleur tableau[100];
    struct CouleurCompteur distinctes[100];
    int nb_distinctes = 0;
    
    srand(time(NULL));

    // 1. Remplissage avec des couleurs (valeurs limitées pour forcer les doublons)
    unsigned char choix[] = {0xff, 0x23, 0x00, 0x45, 0x12};
    for(int i = 0; i < 100; i++) {
        tableau[i].r = choix[rand() % 5];
        tableau[i].g = choix[rand() % 5];
        tableau[i].b = choix[rand() % 5];
        tableau[i].a = choix[rand() % 5];
    }

    // 2. Comptage
    for(int i = 0; i < 100; i++) {
        int existe_deja = 0;
        
        // On vérifie si la couleur est déjà dans notre tableau de couleurs distinctes
        for(int j = 0; j < nb_distinctes; j++) {
            if(tableau[i].r == distinctes[j].c.r &&
               tableau[i].g == distinctes[j].c.g &&
               tableau[i].b == distinctes[j].c.b &&
               tableau[i].a == distinctes[j].c.a) {
                
                // C'est un doublon, on incrémente juste le compteur
                distinctes[j].count++;
                existe_deja = 1;
                break;
            }
        }
        
        // Si elle n'existait pas, on l'ajoute
        if(existe_deja == 0) {
            distinctes[nb_distinctes].c = tableau[i];
            distinctes[nb_distinctes].count = 1;
            nb_distinctes++;
        }
    }

    // 3. Affichage
    for(int i = 0; i < nb_distinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n", 
            distinctes[i].c.r, 
            distinctes[i].c.g, 
            distinctes[i].c.b, 
            distinctes[i].c.a, 
            distinctes[i].count);
    }

    return 0;
}