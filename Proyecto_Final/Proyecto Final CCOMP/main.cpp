#include <stdio.h>
#include <conio.h>
#include "libgame.h"

class JUGADOR {
    int x,y;
public:
    JUGADOR(int _x, int _y);
    void pintar() const ;
    void borrar() const ;
    void Y(int _y){y += _y;}
    int RY() {return y; }
};

JUGADOR::JUGADOR(int _x, int _y)
{
    x=_x;
    y=_y;
}



void JUGADOR::pintar() const
{
    gotoxy(x,y-1); printf("%c",219);
    gotoxy(x,y); printf("%c",219);
    gotoxy(x,y+1); printf("%c",219);
}

void JUGADOR::borrar()const{
    gotoxy(x,y-1); printf(" ");
    gotoxy(x,y); printf(" ");
    gotoxy(x,y+1); printf(" ");
}

int main(){
    OcultaCursor();
    pintar_marco();

    JUGADOR A(6,15);
    A.pintar();
    JUGADOR B(72,15);
    B.pintar();

    char tecla;
    while(1){

        if(kbhit()){
            A.borrar();
            B.borrar();
            tecla=getch();
            if(tecla=='q' && A.RY() > 5) A.Y(-1); else if (tecla=='a'&& A.RY() < 21) A.Y(1);
            if(tecla='o' && B.RY() > 5) B.Y(-1); else if(tecla=='l'&& B.RY(1) < 21) A.Y(1);
            A.pintar();
            B.pintar();
        }

        pausa(10);
    }

    return 0;

}
