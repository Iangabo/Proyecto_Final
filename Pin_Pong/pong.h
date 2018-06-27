#ifndef PONG_H_INCLUDED
#define PONG_H_INCLUDED

class JUGADOR {
int x,y;
public:
    JUGADOR(int, int); //constructor de la clase Jugador
    void pintar()const;
    void borrar() const;
    void mover_cpu(int,int,int);
    void Y( int);
    int RY();
    int RX();
};


class PELOTA{

public:
     int x,y;
    int dx,dy;
    PELOTA(int, int, int, int);
    void pintar() const;
    void borrar() const;
    void mover(JUGADOR,JUGADOR);

    void asign(int , int);
    int PX();
    int PY();
    int DX();
};

class puntaje:public PELOTA{
public:
    puntaje( int, int, int,int); //constructor
    void aumentar_score(int);
    void borrar_score();
};

class MENU{
public:
    void pintar_portada(int &);
};

#endif // PONG_H_INCLUDED
