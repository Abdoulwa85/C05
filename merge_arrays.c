#include <stdio.h>

// Ce programme fusionne deux tableaux en un seul tableau final.

int main() {
    int n1, n2, i;

    // Lire la taille du premier tableau
    scanf("%d", &n1);
    int t1[n1];

    // Lire les éléments du premier tableau
    for (i = 0; i < n1; i++) {
        scanf("%d", &t1[i]);
    }

    // Lire la taille du second tableau
    scanf("%d", &n2);
    int t2[n2];

    // Lire les éléments du second tableau
    for (i = 0; i < n2; i++) {
        scanf("%d", &t2[i]);
    }

    // Créer le tableau fusionné avec une taille suffisante
    int fusion[n1 + n2];

    // Copier les éléments du premier tableau dans le tableau fusionné
    for (i = 0; i < n1; i++) {
        fusion[i] = t1[i];
    }

    // Copier les éléments du second tableau à la suite
    for (i = 0; i < n2; i++) {
        fusion[n1 + i] = t2[i];
    }

    // Afficher le tableau fusionné
    printf("Tableau fusionné : ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", fusion[i]);
    }

    return 0;
} // Fin du programme
