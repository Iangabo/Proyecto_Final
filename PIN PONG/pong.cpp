#include <stdio.h>
#include <conio.h>
#include<iostream>
#include "libgame.h"
#include "pong.h"

using namespace std;

JUGADOR::JUGADOR( int _x,int _y){ //Constructor
x=_x;
y=_y;
}

void JUGADOR::pintar()const{
    gotoxy(x,y-1); cout<<char(219);
    gotoxy(x,y); cout<<char(219);
    gotoxy(x,y+1); cout<<char(219);
}

void JUGADOR::borrar()const{
    gotoxy(x,y-1); cout<<" "<<endl;
    gotoxy(x,y); cout<<" "<<endl;
    gotoxy(x,y+1); cout<<" "<<endl;
}
void JUGADOR::Y(int _y){
    y +=_y;
}
int JUGADOR::RY(){
    return y;
}
int JUGADOR::RX(){
    return x;
}

PELOTA::PELOTA(int _x, int _y,int _dx, int _dy){
    x=_x;
    y=_y;
    dx=_dx;
    dy=_dy;
}

void PELOTA::pintar()const{
    gotoxy(x,y);cout<<char(184);
}

void PELOTA::borrar() const{
    gotoxy(x,y); cout<<" ";

}
void PELOTA::mover(JUGADOR A, JUGADOR B){
    borrar();
    x+=dx;
    y+=dy;
    pintar();
    if(x+ dx==3 || x+dx==76){
        borrar();
        asign(38,14);
        dx= -dx;
    }
    if(y+ dy==3 || y+dy==23)dy= -dy;
    if(x+dx == A.RX() && y >= A.RY()-2 && y <= A.RY()+2){
        dx=-dx;
    }
    if(x+dx == B.RX() && y >= B.RY()-2 && y <= B.RY()+2){
        dx=-dx;
    }
}

void PELOTA::asign(int _x, int _y){
    x=_x;
    y=_y;
}

void MENU::pintar_portada( int &a){
    char portada[18][71] =
    {
    "                                                                      ",
    "     aaaaaaaas                                                        ",
    "   aaaaaaaaaaass                             1.- HUMANO VS HUMANO     ",
    "   aa       aass                             2.- HUMANO VS CPU        ",
    "   aa       aass                                                      ",
    "   aa       aass                                                      ",
    "   aaaaaaaaaass                                                       ",
    "   aaaaaaaaas                                                         ",
    "   aass                                                               ",
    "   aass    aaaas    aaas   aas   aaaaas                               ",
    "   aass  aa    aas  aasas  aas  aa    as                              ",
    "   aass  aa    aas  aas as aas  aa                                    ",
    "   aass  aa    aas  aas  asaas  aa  aaaa                              ",
    "   aass  aa    aas  aas   aaas  aa    aas                             ",
    "   aass  aa    aas  aas    aas  aaaaaaaas                             ",
    "   aass    aaaas    aas    aas   aaaaa a                              ",

    };

for (int i=0;i<16;i++){
    for(int j=0;j<60;j++){
        gotoxy(j+5,i+5);
        cout<<char(portada[i][j]);
    }
}
a=getch();

for (int i=0;i<16;i++){
    for(int j=0;j<60;j++){
        gotoxy(j+5,i+5);
        cout<<" ";
    }
}

}
