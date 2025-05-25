#include <stdio.h>
// Ce proggramme permet d'effectuer une rotation à gauche du tableau (le 1er élément va à la fin)
int main() {
    int n, i, temp;
    scanf("%d", &n); // Taille du tableau
    int tab[n];

    // Lecture des éléments
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Sauvegarder le premier élément
    temp = tab[0];

    // Décaler les éléments vers la gauche
    for (i = 0; i < n - 1; i++) {
        tab[i] = tab[i + 1];
    }

    // Placer le premier élément à la fin
    tab[n - 1] = temp;

    // Affichage du tableau après rotation
    printf("Tableau après rotation : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
} // Fin du programme
