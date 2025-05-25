#include <stdio.h>

// Ce programme cherche et affiche la plus petite valeur d’un tableau.

int main() {
    int n, i, min;

    // Lire la taille du tableau
    scanf("%d", &n);
    int tab[n];

    // Lire les éléments du tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Initialiser le minimum avec le premier élément
    min = tab[0];

    // Parcourir le tableau pour trouver le plus petit élément
    for (i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i]; // Mettre à jour le minimum
        }
    }

    // Afficher le minimum trouvé
    printf("Le minimum est : %d\n", min);

    return 0;
} // Fin du programme
