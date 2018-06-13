#include <stdio.h>
#include <conio.h>
#include<iostream>
#include "libgame.h"
#include "pong.h"

using namespace std;

int main(){

int dificultad;
    OcultaCursor();
    cout<<"Seleccione el nivel: "<<endl;
    cout<<"Nivel 1"<<endl;
    cout<<"Nivel 2"<<endl;
    cout<<"Nivel 3"<<endl;
    cin>>dificultad;

    pintar_marco();
    int cont=0, op_juego;
    MENU M;
    M.pintar_portada(op_juego);
    JUGADOR A(6,15);
    A.pintar();
    JUGADOR B(74,15);
    B.pintar();
    PELOTA P(38,14,1,1);
    char tecla;

    if(dificultad==1){
    while(1){
            if(kbhit()){
            A.borrar(); B.borrar();
            tecla= getch();
            if(tecla=='q' && A.RY()>5) A.Y(-1); else if (tecla=='a' &&A.RY()<21) A.Y(1);
            if(op_juego=='1'){
            if(tecla=='o' && B.RY()>5) B.Y(-1); else if (tecla=='l'&& B.RY()<21) B.Y(1);
            }
            A.pintar(); B.pintar();

        }

        if(op_juego=='2'&& !cont) B.mover_cpu(P.PX(),P.PY(),P.DX());
        if(!cont++)P.mover(A,B);
        if(cont>5)cont=0;
        pausa(15);

    }
    }
    if(dificultad==2){
    while(1){
            if(kbhit()){
            A.borrar(); B.borrar();
            tecla= getch();
            if(tecla=='q' && A.RY()>5) A.Y(-1); else if (tecla=='a' &&A.RY()<21) A.Y(1);
            if(op_juego=='1'){
            if(tecla=='o' && B.RY()>5) B.Y(-1); else if (tecla=='l'&& B.RY()<21) B.Y(1);
            }
            A.pintar(); B.pintar();

        }

        if(op_juego=='2'&& !cont) B.mover_cpu(P.PX(),P.PY(),P.DX());
        if(!cont++)P.mover(A,B);
        if(cont>5)cont=0;
        pausa(7);
    }
    }

    if(dificultad==3){
    while(1){
            if(kbhit()){
            A.borrar(); B.borrar();
            tecla= getch();
            if(tecla=='q' && A.RY()>5) A.Y(-1); else if (tecla=='a' &&A.RY()<21) A.Y(1);
            if(op_juego=='1'){
            if(tecla=='o' && B.RY()>5) B.Y(-1); else if (tecla=='l'&& B.RY()<21) B.Y(1);
            }
            A.pintar(); B.pintar();

        }

        if(op_juego=='2'&& !cont) B.mover_cpu(P.PX(),P.PY(),P.DX());
        if(!cont++)P.mover(A,B);
        if(cont>5)cont=0;
        pausa(1);
    }
    }
    return 0;
}
