#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display() {
  char **torre_b = superImpose(rook, reverse(whiteSquare));
  char **caballo_b = superImpose(knight, whiteSquare);

  interpreter(join(torre_b, caballo_b));
}
