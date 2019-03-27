#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main() {
    int m;
    do{
        puts("ARBOLES SIN FRUTOS\n"
             "1 >> Altas\n"
             "2 >> Bajas\n"
             "3 >> Mostrar");
        scanf("%d",&m);
        switch (m)
        {
            case 1:
                break;

            case 2:
                break;

            case 3:

                break;

            case 0:
                puts("CHI CHENOL");
                break;

            default: puts("Inserte una opcion valida");
        }
    }while(m!=0);
    return 0;
}