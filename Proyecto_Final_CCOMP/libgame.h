#ifndef LIBGAME_H_INCLUDED
#define LIBGAME_H_INCLUDED

// NUMEROS ASOCIADOS A LAS FLECHAS DEL TECLADO
#define ARRIBA     72
#define IZQUIERDA  75
#define DERECHA    77
#define ABAJO      80
#define ESC        27
#define ENTER      13

// colores
#define AZUL     0x009
#define AMARILLO 0x00E
#define ROJO     0x00C
#define VERDE    0x002
#define VERDE2   0x00B
#define MORADO   0x005
#define PLATA    0x00F


void inicia_libgame();
void gotoxy(int x, int y);
void OcultaCursor();
void pintar_marco();
void Color(int color);
void pausa(int x);
void pausa();

#endif // LIBGAME_H_INCLUDED

class JUGADOR {
    int x,y;
public:
    JUGADOR(int _x, int _y);
    void pintar() const ;
    void borrar() const ;
    void subir(int _y){
        y+=_y;
        }
    int RY(){
        return y;
    }
};

class PELOTA
{
    int x,y;
    int dx,dy;
    public:
        PELOTA(int _x, int _y, int _dx, int _dy);
        void pintar() const;
        void borrar() const;
        void mover();
        void asignar(int _x,int _y)
        {
            x=_x;
            y=_y;
        }
};
