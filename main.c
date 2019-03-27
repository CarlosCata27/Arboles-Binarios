#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main() {
    int m,dato;
    Nodo *tree = NULL;
    do{
        puts("ARBOLES SIN FRUTOS\n"
             "1 >> Altas\n"
             "2 >> Bajas\n"
             "3 >> Mostrar\n"
             "0 >> Salir\n");
        scanf("%d",&m);
        switch (m)
        {
            case 1:
                puts("Inserte el dato a dar de alta\n");
                scanf("%d",&dato);
                tree = alta(tree,dato);
                break;

            case 2:
                break;

            case 3:
                puts("MOSTRAR\n"
                     "1 >> Preorder\n"
                     "2 >> Inorder\n"
                     "3 >> Postorder\n"
                     "0 >> Regresar\n");
                scanf("%d",&m);
                switch (m)
                {
                    case 1:
                        preOrden(tree);
                        break;

                    case 2:
                        inOrden(tree);
                        break;

                    case 3:
                        postOrden(tree);
                        break;

                    case 0:
                        puts("Regresando");
                        break;
                }
                break;

            case 0:
                puts("CHI CHENOL");
                break;

            default: puts("Inserte una opcion valida");
        }
    }while(m!=0);
    return 0;
}