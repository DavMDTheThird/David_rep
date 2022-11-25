//David Medina Dominguez    A01783155
//Reto "Las ocho Reinas"

#include <stdio.h>
#include <stdlib.h>
//type [member_name] : width ; //-> bit manipulation
//type arrayName [ arraySize ]; //-> Array

typedef struct{
    unsigned int square : 1;

}ajedrez_square;

struct tablero_de_ajedrez{
    ajedrez_square tablero[8][8];
};

void imprimir(){    
    unsigned short i, k; i = 1; k = 1;
    do{
        if(i == 8){
            printf("%hd ",i);
            printf("\n");
            i = 1; ++k;
        }
        else{
            printf("%hd ",i);
            ++i;
        }
    }while(k != 9);
}

unsigned short main(){
    imprimir();
    return 0;
}