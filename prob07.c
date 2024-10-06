#include "chess.h"
#include "figures.h"
#include <stdlib.h>

char **createFilas(int pos, char **cuadrado_in) {
  char **fila = reverse(cuadrado_in);
  char **caballo = knight;
  char **cuadrado = cuadrado_in;
  for (int i = 1; i < 8; i++) {
    if (i % 2 == 0)
      cuadrado = reverse(cuadrado_in);
    else
      cuadrado = cuadrado_in;
    if (i == pos)
      cuadrado = superImpose(caballo, cuadrado);
    fila = join(fila, cuadrado);
  }
  return fila;
}

void display() {
  char **fila_1 = createFilas(4, reverse(whiteSquare));
  char **fila_2 = createFilas(4, whiteSquare);
  char **fila_3 = createFilas(0, reverse(whiteSquare));
  char **fila_4 = createFilas(0, whiteSquare);
  char **fila_5 = createFilas(0, reverse(whiteSquare));
  char **fila_6 = createFilas(0, whiteSquare);
  char **fila_7 = createFilas(4, reverse(whiteSquare));
  char **fila_8 = createFilas(4, whiteSquare);
  char **tab1 = up(fila_2, fila_1);
  char **tab2 = up(fila_3, tab1);
  char **tab3 = up(fila_4, tab2);
  char **tab4 = up(fila_5, tab3);
  char **tab5 = up(fila_6, tab4);
  char **tab6 = up(fila_7, tab5);
  char **tab7 = up(fila_8, tab6);
  interpreter(tab7);
}
