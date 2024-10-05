#include "chess.h"
#include "figures.h"
#include <stdlib.h>

char **createTablero() {
  char **neg = reverse(repeatH(join(whiteSquare, reverse(whiteSquare)), 4)),
       **blan = repeatH(join(whiteSquare, reverse(whiteSquare)), 4),
       **estructura = up(neg, blan);
  char **tablero = repeatV(estructura, 4);
  return tablero;
}

char **special_pieces() {
  char **torre_caballo = join(rook, knight);
  char **alfin_reyna = join(bishop, queen);
  char **rey_alfil = join(king, bishop);
  char **caballo_torre = join(knight, rook);
  char **fil_1 = join(torre_caballo, alfin_reyna);
  char **fil_2 = join(rey_alfil, caballo_torre);
  // char **piezas = superImpose(join(fil_1, fil_2), tablero);
  // return piezas;
  return join(fil_1, fil_2);
}

void display() {
  char **piezas_especiales = special_pieces();
  char **fila_peones = repeatH(pawn, 8);
  // interpreter(up(piezas_especiales, fila_peones));
  interpreter(superImpose(king, createTablero()));
}
