#include "chess.h"
#include "figures.h"

void display() {
  char **blackKnight = flipV(knight);
  interpreter(blackKnight);
}
