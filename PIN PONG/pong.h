#ifndef PONG_H_INCLUDED
#define PONG_H_INCLUDED

class JUGADOR {
int x,y;
public:
    JUGADOR(int, int); //constructor de la clase Jugador
    void pintar()const;
    void borrar() const;
    void Y( int);
    int RY();
    int RX();
};


class PELOTA{
    int x,y;
    int dx,dy;
public:
    PELOTA(int, int, int, int);
    void pintar() const;
    void borrar() const;
    void mover(JUGADOR,JUGADOR);
    void asign(int , int);

};

#endif // PONG_H_INCLUDED
