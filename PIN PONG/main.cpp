#include <stdio.h>
#include <conio.h>
#include<iostream>
#include "libgame.h"
#include "pong.h"

using namespace std;

int main(){

    OcultaCursor();
    pintar_marco();
    JUGADOR A(6,15);
    A.pintar();
    JUGADOR B(74,15);
    B.pintar();
    PELOTA P(38,14,1,1);

    char tecla;
    int cont=0;
    while(1){
        if(kbhit()){
            A.borrar(); B.borrar();
            tecla= getch();
            if(tecla=='q' && A.RY()>5) A.Y(-1); else if (tecla=='a' &&A.RY()<21) A.Y(1);
            if(tecla=='o' && B.RY()>5) B.Y(-1); else if (tecla=='l'&& B.RY()<21) B.Y(1);
            A.pintar(); B.pintar();
        }

        if(!cont++)P.mover(A,B);
        if(cont>5)cont=0;
        pausa(10);
    }


    return 0;
}
