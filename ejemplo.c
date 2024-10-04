#include "chess.h"
#include "figures.h"

void display() {
  char **blackKnight = flipH(flipV(knight));
  interpreter(blackKnight);
}
