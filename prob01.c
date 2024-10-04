#include "chess.h"
#include "figures.h"

void display() {
  char **tablero = join(whiteSquare, reverse(whiteSquare));

  interpreter(tablero);
}
