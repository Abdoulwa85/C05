#include <stdio.h>
‎// Ce programme permet de fusionne un tableaux dans un troisième
‎int main() {
‎    int n1, n2, i;
‎
‎    scanf("%d", &n1); // Taille du 1er tableau
‎    int t1[n1];
‎    for (i = 0; i < n1; i++) {
‎        scanf("%d", &t1[i]);
‎    }
‎
‎    scanf("%d", &n2); // Taille du 2e tableau
‎    int t2[n2];
‎    for (i = 0; i < n2; i++) {
‎        scanf("%d", &t2[i]);
‎    }
‎
‎    int fusion[n1 + n2];
‎
‎    // Copier les éléments du 1er tableau
‎    for (i = 0; i < n1; i++) {
‎        fusion[i] = t1[i];
‎    }
‎
‎    // Copier les éléments du 2e tableau
‎    for (i = 0; i < n2; i++) {
‎        fusion[n1 + i] = t2[i];
‎    }
‎
‎    // Affichage
‎    printf("Tableau fusionné : ");
‎    for (i = 0; i < n1 + n2; i++) {
‎        printf("%d ", fusion[i]);
‎    }
‎
‎    return 0;
‎} // Fin du programme
