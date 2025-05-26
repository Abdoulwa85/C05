#include <stdio.h>

// Ce programme effectue une rotation à gauche d’un tableau d'entiers.
// Le premier élément est déplacé à la fin, et les autres sont décalés vers la gauche.

int main() {
    int n, i, temp;

    // Lire la taille du tableau
    scanf("%d", &n);

    // Déclarer le tableau avec n éléments
    int tab[n];

    // Lire les n éléments du tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Sauvegarder le premier élément avant de le déplacer
    temp = tab[0];

    // Décaler tous les éléments vers la gauche
    for (i = 0; i < n - 1; i++) {
        tab[i] = tab[i + 1];
    }

    // Placer le premier élément à la fin
    tab[n - 1] = temp;

    // Afficher le tableau après la rotation
    printf("Tableau après rotation : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
} // Fin du programme
