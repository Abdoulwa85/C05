#include <stdio.h>

// Ce programme compte le nombre de fois qu’un élément apparaît dans un tableau.

int main() {
    int n, i, val, count = 0;

    // Lire la taille du tableau
    scanf("%d", &n);
    int tab[n];

    // Lire les éléments du tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Lire l’élément à rechercher
    scanf("%d", &val);

    // Parcourir le tableau pour compter les occurrences de val
    for (i = 0; i < n; i++) {
        if (tab[i] == val) {
            count++;
        }
    }

    // Afficher le résultat
    printf("L'élément %d apparaît %d fois.\n", val, count);

    return 0;
} // Fin du programme
