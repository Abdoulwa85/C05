#include <stdio.h>

int main() {
    int t1[100], t2[100], n1, n2, i, j;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &t1[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &t2[i]);
    }

    printf("Intersection : ");

    // Parcourir chaque élément du tableau 1
    for (i = 0; i < n1; i++) {
        // Vérifier s’il est dans le tableau 2
        for (j = 0; j < n2; j++) {
            if (t1[i] == t2[j]) {
                // Vérifier s’il a déjà été affiché
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
                break; // Aller à l'élément suivant
            }
        }
    }

    return 0;
} // Fin du programme
