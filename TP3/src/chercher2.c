#include <stdio.h>

// Notre propre petite fonction pour comparer deux chaînes sans utiliser strcmp
// Renvoie 1 si identique, 0 si différent
int comparer_chaines(char *chaine1, char *chaine2) {
    int i = 0;
    // Tant que les lettres sont les mêmes et qu'on n'est pas à la fin de la phrase
    while (chaine1[i] == chaine2[i] && chaine1[i] != '\0' && chaine2[i] != '\0') {
        i++;
    }
    // Si la boucle s'est arrêtée au moment où les DEUX chaînes sont terminées (\0), c'est gagné
    if (chaine1[i] == '\0' && chaine2[i] == '\0') {
        return 1; 
    }
    return 0;
}

int main() {
    // Tableau de pointeurs vers des chaînes de caractères
    char *phrases[10] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    // La phrase cible
    char cible[] = "La programmation en C est amusante.";
    
    printf("Recherche de : \"%s\"\n", cible);

    int trouve = 0;
    for(int i = 0; i < 10; i++) {
        if(comparer_chaines(phrases[i], cible) == 1) {
            trouve = 1;
            break;
        }
    }

    if(trouve == 1) {
        printf("Resultat : Phrase trouvee\n");
    } else {
        printf("Resultat : Phrase non trouvee\n");
    }

    return 0;
}