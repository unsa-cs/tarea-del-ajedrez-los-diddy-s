#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display() {
  char **blackKnight = reverse(knight);
  char **whitesquare = whiteSquare;
  char **square = superImpose(blackKnight, whitesquare);
  char **alfil = pawn;
  char **unidos = join(square, whitesquare);
  char **repeat = repeatH(unidos, 4);
  interpreter(repeat);

  free(unidos);
  free(blackKnight);
  free(square);
}
