# Proyecto_Final
ATENCION:
    Este software no tiene ninguna garantia y los autores no se hacen
    responsables de los posibles perjuicios causados por su uso.
    Usted asume los riesgos del uso de este software.
    
    
* INTRODUCCIÓN.

El programa ping-pong fue creado en el lenguaje C++ y compilado en CodeBlocks versión 17.12.    

* DEFINICIÓN DEL PROYECTO FINAL:

Realizar un programa que simule un juego de ping-pong en la computadora y que de la puntuación del jugador.Con las siguientes opciones:

   MODALIDAD A. HUMANO -1 VS HUMANO -2.
   MODALIDAD B. HUMANO -1 VS PC.
   
* ANÁLISIS.

Nivel 1: En este nivel los jugadores tienen la misma velocidad, no siendo así la de la pelota que será dos veces mas veloz. Cuando uno de los jugadores llegue a 4 puntos el juego sube al siguiente nivel.

Nivel 2 y en adelante: En este nivel al igual que en el otro será la misma velocidad para ambos jugadores, la de la pelota será dos veces mayor, al llegar a 8 puntos la velocidad de la pelota aumentara tres veces mas, al llegar a 16 será cuatro veces mas rápida, el juego termina cuando uno de los jugadores llegue a 30 puntos.

* DISEÑO:

El movimiento de la pelota se hace incrementando o decrementando sus coordenadas en pantalla. 
A continuación se presentan las fórmulas que dan movimiento y velocidad a la pelota.

x+=dx;
y+=dy;

Donde x y y son las coordenadas iniciales de la pelota, dx y dy son las variables que determinan la dirección de la pelota, todo esto se realiza dentro un ciclo, el cual se repite cambiando las coordenadas de la pelota en cada ciclo.

Lo mismo ocurre para dar movimiento a las barras, pero con la diferencia de que sus coordenadas en x 
permanecen constantes, y solamente varían en y. Para controlar las barras en modalidad-A, el huimano-1
usa las teclas Q para subir y A para bajar, el humano-2 usalas teclas p para subir y l para bajar. Cuando se 
esta en modalidad-B se usan las mismas teclas que en la modalidad-A para controlar al jugador-1


*CONCLUYENDO:

Este proyecto fue realizado por:
Karen Denegri
Ian Camero 
Dario Diaz 
