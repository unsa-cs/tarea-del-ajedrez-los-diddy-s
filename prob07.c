#include "chess.h"
#include "figures.h"

void display() {
  char **tablero = reverse(repeatV(join(whiteSquare, reverse(whiteSquare)), 2));
  char **fila_1 = join(knight, rotateL(knight));

  interpreter(superImpose(fila_1, tablero));
}
