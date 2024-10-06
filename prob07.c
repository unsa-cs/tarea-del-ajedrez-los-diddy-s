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

void display() {
  char **fila_1 = createFilas(4);
  char **fila_2 = createFilas(4);
  char **fila_3 = createFilas(0);
  char **fila_4 = createFilas(0);
  char **fila_5 = createFilas(0);
  char **fila_6 = createFilas(0);
  char **fila_7 = createFilas(4);
  char **fila_8 = createFilas(4);
  char **tab1 = up(fila_1, fila_2);
  char **tab2 = up(tab1, fila_3);
  char **tab3 = up(tab2, fila_4);
  char **tab4 = up(tab3, fila_5);
  char **tab5 = up(tab4, fila_6);
  char **tab6 = up(tab5, fila_7);
  char **tab7 = up(tab6, fila_8);
  interpreter(tab7);
}
