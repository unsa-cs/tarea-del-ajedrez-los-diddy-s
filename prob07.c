#include "chess.h"
#include "figures.h"
#include <stdlib.h>

char **createFilas(int pos) {
  char **fila = reverse(whiteSquare);
  char **caballo = knight;
  char **cuadrado = whiteSquare;
  for (int i = 1; i < 8; i++) {
    if (i % 2 == 0)
      cuadrado = reverse(whiteSquare);
    else
      cuadrado = whiteSquare;
    if (i == pos)
      cuadrado = superImpose(caballo, cuadrado);
    fila = join(fila, cuadrado);
  }
  return fila;
}

void display() { interpreter(createFilas(4)); }
