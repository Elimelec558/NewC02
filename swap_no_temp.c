// Lire deux nombres et les inverser sans utiliser de variable temporaire.
#include <stdio.h>
int main() {
    int a, b;
    // Lecture des valeurs
    scanf("%d %d", &a, &b);
    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;
    // Affichage du résultat
    printf("Apres echange: a = %d, b = %d", a, b);
    return 0;
}
