#include "chess.h"
#include "figures.h"

void display() {
  char **blackKnight = knight;
  interpreter(blackKnight);
  char **whitepawn = reverse(pawn);
  interpreter(whitepawn);
}
