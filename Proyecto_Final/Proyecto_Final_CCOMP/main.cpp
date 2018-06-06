#include <stdio.h>
#include <conio.h>
#include "libgame.h"





int main(){
    OcultaCursor();
    pintar_marco();

    JUGADOR A(6,15);
    A.pintar();
    JUGADOR B(72,15);
    B.pintar();
    PELOTA P(10,5,1,1);
    char tecla;
    int cont=0;
    while(1)
        {

            if(kbhit()){
                    A.borrar();
                    B.borrar();
                    tecla=getch();
                    if(tecla=='w'&& A.RY() > 5) A.subir(-1);
                    else if(tecla=='s'&& A.RY() < 21 ) A.subir(1);
                    if(tecla=='o'&& B.RY() >5) B.subir(-1);
                    else if(tecla=='l'&& B.RY()  < 21) B.subir(1);
                    A.pintar();
                    B.pintar();

        }

        if(!cont++)P.mover();
        if(cont>5)cont=0;
        pausa(10);
    }

    return 0;

}
