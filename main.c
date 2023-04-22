#include <stdio.h>
/*
EJERCICIO 13 : Implemente una función que reciba dos strings como parámetro y devuelva 1 si son iguales y 0 en caso contrario. No se puede usar la función strcmp() de la librería string.h.
*/
 #define MAX 50

int sonIguales(char *str1, char *str2);


int sonIguales(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') { // mientras no se alcance el fin de ninguna de las cadenas
        if (str1[i] != str2[i]) { // si los caracteres son diferentes, las cadenas no son iguales
            return 0;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') { // si se llegó al final de ambas cadenas al mismo tiempo, son iguales
        return 1;
    }
    return 0; // si se llegó al final de una cadena antes que la otra, son diferentes
}

int main() {
    char str1[] = "hola";
    char str2[] = "hola";
    if (sonIguales(str1, str2)) {
        printf("Las cadenas son iguales\n");
    } else {
        printf("Las cadenas son diferentes\n");
    }
    return 0;
}
