// Programme lisant un entier et indiquant s'il est pair ou impair.
#include <stdio.h>
int main() {
    // Déclaration de la variable "nombre" de type entier.
    int nombre;
    // Demande à l'utilisateur de saisir un entier.
    scanf("%d", &nombre);
    // Vérification avec l'opérateur modulo (%).
    if (nombre % 2 == 0) {
        printf("%d est pair.\n", nombre);
    } else {
        printf("%d est impair.\n", nombre);
    }
    return 0; // Indique que le programme s'est terminé avec succès.
}
