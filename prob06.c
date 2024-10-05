#include "chess.h"
#include "figures.h"
#include <stdlib.h>

char **createFilas(int filas) {
  char **neg = reverse(repeatH(join(whiteSquare, reverse(whiteSquare)), 4)),
       **blan = repeatH(join(whiteSquare, reverse(whiteSquare)), 4),
       **estructura = up(neg, blan);
  char **tablero = repeatV(estructura, filas / 2);
  return tablero;
}

char **special_pieces() {
  char **torre_caballo = join(rook, knight);
  char **alfin_reyna = join(bishop, queen);
  char **rey_alfil = join(king, bishop);
  char **caballo_torre = join(knight, rook);
  char **fil_1 = join(torre_caballo, alfin_reyna);
  char **fil_2 = join(rey_alfil, caballo_torre);

  return join(fil_1, fil_2);
}

void display() {
  char **piezas_especiales = special_pieces();
  char **fila_peones = repeatH(pawn, 8);
  char **piezas_negras = reverse(piezas_especiales);
  char **peones_negros = reverse(fila_peones);
  char **intermedio = createFilas(4);
  char **p_A = superImpose(up(piezas_especiales, fila_peones), createFilas(2));
  char **p_B = superImpose(up(peones_negros, piezas_negras), createFilas(2));
  interpreter(up(p_A, up(intermedio, p_B)));
}
