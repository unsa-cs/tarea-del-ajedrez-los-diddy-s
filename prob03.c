#include "chess.h"
#include "figures.h"

void display() {
  char **FilaB = repeatH(join(whiteSquare, reverse(whiteSquare)), 4);
  char **FilaA = reverse(FilaA);
  char **DFila = up(FilaA, FilaB);
  interpreter(DFila);
}
