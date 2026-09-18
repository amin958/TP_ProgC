#include <stdio.h>

int main() {
    // La variable compteur (doit être strictement inférieure à 10)
    int compteur = 5; 

    // ==========================================
    // 1ère méthode : Avec des boucles FOR
    // ==========================================
    printf("--- Version avec boucles FOR ---\n");
    
    // Boucle pour gérer les lignes
    for (int i = 0; i < compteur; i++) {
        // Boucle pour gérer les colonnes
        for (int j = 0; j <= i; j++) {
            
            // Condition pour vérifier si on est sur un bord du triangle :
            // j == 0 : bord gauche
            // j == i : bord droit (la diagonale)
            // i == compteur - 1 : la toute dernière ligne en bas
            if (j == 0 || j == i || i == compteur - 1) {
                printf("* ");
            } else {
                printf("# "); // Intérieur du triangle
            }
        }
        printf("\n"); // Retour à la ligne après chaque fin de ligne du triangle
    }

    printf("\n"); // Séparation visuelle dans le terminal

    // ==========================================
    // 2ème méthode : Avec des boucles WHILE
    // ==========================================
    printf("--- Version avec boucle WHILE et BREAK ---\n");
    
    int ligne = 0;
    while (ligne < compteur) {
        int colonne = 0;
        
        // On utilise while(1) pour créer une boucle qui tourne à l'infini
        while (1) {
            
            // Branchement inconditionnel (break) pour sortir de la boucle 
            // quand on a affiché le bon nombre de colonnes
            if (colonne > ligne) {
                break; 
            }
            
            // Même condition que pour la boucle for
            if (colonne == 0 || colonne == ligne || ligne == compteur - 1) {
                printf("* ");
            } else {
                printf("# ");
            }
            
            colonne++; // On passe à la colonne suivante
        }
        
        printf("\n");
        ligne++; // On passe à la ligne suivante
    }

    return 0;
}