#include "libgame.h"
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include<iostream>
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

void gotoxy(int x, int y)  // funcion que posiciona el cursos en la coordenada (x,y)
{
    HANDLE hCon;
    COORD dwPos;

    dwPos.X = x;
    dwPos.Y = y;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,dwPos);
}

void OcultaCursor() {
    CONSOLE_CURSOR_INFO cci = {100, FALSE}; // El segundo miembro de la estructura indica si se muestra el cursor o no.

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

void Color(int color){
	static HANDLE hConsole;
    hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute( hConsole, color | (0 * 0x10 + 0x100) );
}

void pintar_marco()       // funcion que pinta los limites del escenario
{
     // Lineas horizontals
     for(int i=2; i < 78; i++){
        gotoxy (i, 3); cout<<char(205);
        gotoxy(i, 23); cout<<char(205);
     }
     //Lineas verticales
     for(int v=4; v < 23; v++){
        gotoxy (2,v);  cout<<char(186);
        gotoxy(77,v);  cout<<char(186);
     }
     // Esquinas
     gotoxy  (2,3);    cout<<char(201);
     gotoxy (2,23);    cout<<char(200);
     gotoxy (77,3);    cout<<char(187);
     gotoxy(77,23);    cout<<char(188);
}

void pausa(int x){
    Sleep(x);
}

void pausa(){
    getch();
}


                                                                                                                                                                                                                                                                                                                                                                                                                                  void inicia_libgame(){char inicio[50][100] ={"                  AAA        AAAAAAAA    AAAAAA                       ","                  AAA           AA       AA   AA                      ","                  AAA           AA       AAAAAA                       ","                  AAAAAAA       AA       AA   AA                      ","                  AAAAAAA    AAAAAAAA    AAAAAA                       ","                                                                      ","                                                                      ","                                                                      ","       AAAAAAAAA      AAAAAA       AAAA  AAAA      AAAAAAAAAAA        ","       AAAAAAAAA     AAA    A    AAAAAAAAAAAAAA    AAAAAAAAAAA        ","       AA     AA     AAA    A   AAA  AAAAA   AAA   AAA                ","       AA            AAA    A   AAA   AAA    AAA   AAAAAAAA           ","       AA   AAAAAA   AAAAAAAA   AAA   AAA    AAA   AAAAAAAA           ","       AA        A   AAA    A   AAA   AAA    AAA   AAA                ","       AAAAAAAAA A   AAA    A   AAA   AAA    AAA   AAAAAAAAAAA        ","       AAAAAAAAA     AAA    A   AAA   AAA    AAA   AAAAAAAAAAA        ","                                                                      ",};for(int i = 0 ; i< 17 ; i++){for(int j = 0 ; j < 71 ; j++){if(inicio[i][j] == 'A'){gotoxy(j+5,i+5); printf("*");}}}getch();for(int i = 0 ; i< 17 ; i++){for(int j = 0 ; j < 71 ; j++){if(inicio[i][j] == 'A'){gotoxy(j+5,i+5); printf(" ");}}}}
