#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display() {
  char **tablero = reverse(repeatH(join(whiteSquare, reverse(whiteSquare)), 4));
  char **torre_b = rook;
  char **caballo_b = knight;

  interpreter(superImpose(join(torre_b, caballo_b), tablero));
}
