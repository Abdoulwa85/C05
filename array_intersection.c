#include <stdio.h>
// Affiche les éléments communs entre deux tableaux sans doublons
int main() {
    int n1, n2, i, j;
    int t1[100], t2[100]; // Taille du tableau

    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &t1[i]);
    }

    scanf("%d", &n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &t2[i]);
    }

    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (t1[i] == t2[j]) {
                // Vérifier si déjà affiché
                int deja_vu = 0;
                for (int k = 0; k < i; k++) {
                    if (t1[k] == t1[i]) {
                        deja_vu = 1;
                        break;
                    }
                }
                if (!deja_vu) {
                    printf("%d ", t1[i]);
                }
                break;
            }
        }
    }

    printf("\n"); // Fin de ligne obligatoire
    return 0;
} // Fin du programme
