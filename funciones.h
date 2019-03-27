#ifndef ARBOLES_FUNCIONES_H
#define ARBOLES_FUNCIONES_H

typedef struct _Nodo{
    int dato;
    struct _Nodo *L;
    struct _Nodo *R;
}Nodo;

Nodo* allocateMem(int dato)
{
    Nodo* dummy;
    dummy = (Nodo*)malloc(sizeof(Nodo));
    dummy -> dato = dato;
    dummy -> R = NULL;
    dummy -> L = NULL;
    return dummy;
}

void inOrden (Nodo *top){
    int i=1;
    if (top != NULL){
        inOrden (top->L);
        printf("Elemento %d del arbol = %d\n",i,top->dato);
        inOrden(top->R);
    }
}

void preOrden (Nodo *top){
    int i = 1;
    if (top != NULL){
        printf("Elemento %d del arbol = %d\n",i,top->dato);
        preOrden (top->L);
        preOrden(top->R);
    }
}

void postOrden (Nodo *top){
    int i=1;
    if (top != NULL){
        preOrden (top->L);
        preOrden(top->R);
        printf("Elemento %d del arbol = %d\n",i,top->dato);
    }
}

Nodo *alta(Nodo *top,int dato)
{
    Nodo *aux,*nuevo;
    nuevo = allocateMem(dato);
    aux = top;
    if(aux == NULL)
    {
        return nuevo;
    }
    else
    {
        while(aux!=NULL)
        {
            if(aux->dato<nuevo->dato)
            {
                if(aux->R==NULL)
                {
                    aux->R=nuevo;
                    break;
                }
                else
                {
                    aux = aux->R;
                }
            }
            else
            {
                if(aux->L==NULL)
                {
                    aux->L=nuevo;
                    break;
                }
                else
                {
                    aux = aux->L;
                }
            }
        }
    }
    return top;
}

#endif