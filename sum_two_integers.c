#include <stdio.h>
int main() {
    int nombre1, nombre2, somme;
    // Demande à l'utilisateur de saisir deux entiers.
    scanf("%d %d", &nombre1, &nombre2);
    // Calcul de la somme.
    somme = nombre1 + nombre2;
    // Affichage du résultat.
    printf("La somme est : %d", somme);
    return 0; 
}
