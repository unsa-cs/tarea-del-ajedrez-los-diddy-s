#include "chess.h"
#include "figures.h"
#include <stdlib.h>

char **createFilas(int filas) {
  char **neg = reverse(repeatH(join(whiteSquare, reverse(whiteSquare)), 2)),
       **blan = repeatH(join(whiteSquare, reverse(whiteSquare)), 2),
       **estructura = up(neg, blan);
  char **tablero = repeatV(estructura, filas / 2);
  return tablero;
}

void display() {

  interpreter(createFilas(4));
}
