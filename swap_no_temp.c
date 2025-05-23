#include <stdio.h>
// Lire deux nombres et les inverser sans utiliser de variable temporaire.
int main() {
    int a, b;
    // Lecture des valeurs.
    scanf("%d %d", &a, &b);
    // Échange sans variable temporaire.
    a = a + b;
    b = a - b;
    a = a - b;
    // Affichage du résultat.
    printf("Après échange: a = %d, b = %d", a, b);
    return 0;
}
