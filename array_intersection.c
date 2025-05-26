#include <stdio.h>

// Ce programme affiche les éléments communs entre deux tableaux.
// Il évite d’afficher les doublons dans le résultat.

int main() {
    int n1, n2, i, j;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int t1[n1];

    // Lire les éléments du premier tableau
    for (i = 0; i < n1; i++) {
        scanf("%d", &t1[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    int t2[n2];

    // Lire les éléments du deuxième tableau
    for (i = 0; i < n2; i++) {
        scanf("%d", &t2[i]);
    }

    // Affichage des éléments communs (intersection)
    printf("Intersection : ");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (t1[i] == t2[j]) {
                // Vérifier si l’élément a déjà été affiché
                int deja_affiche = 0;
                for (int k = 0; k < i; k++) {
                    if (t1[k] == t1[i]) {
                        deja_affiche = 1;
                        break;
                    }
                }
                if (!deja_affiche) {
                    printf("%d ", t1[i]);
                }
                break; // Ne pas afficher plusieurs fois
            }
        }
    }

    return 0;
} // Fin du programme
