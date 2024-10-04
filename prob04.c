#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display() {
  char **torre_b = superImpose(rook, reverse(whiteSquare));
  interpreter(torre_b);
}
