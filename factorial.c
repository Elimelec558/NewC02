// Programme lisant un nombre entier et calculant son factoriel.
#include <stdio.h>
int main() {
    // Declaration du type des variables "n","i". 
    int n, i;     // Declaration du type des variables "n","i". 
    long factorial = 1; // Utilisation de long pour éviter le dépassement d'entier
    scanf("%d", &n); // Commande permettant à l'utilisateur d'entré une certainne valeur
    // Boucle for , permettant de calculé le factoriel du nombre entré
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Le factoriel de %d est : %ld\n", n, factorial);
    return 0; 
}




    