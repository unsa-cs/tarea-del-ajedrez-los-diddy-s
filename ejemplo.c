#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display() {
  char **blackKnight = reverse(knight);
  char **whitesquare = whiteSquare;
  char **square = superImpose(blackKnight, whitesquare);
  char **alfil = pawn;
  char **unidos = up(join(square, whitesquare), alfil);

  interpreter(unidos);

  free(unidos);
  free(blackKnight);
  free(square);
}
