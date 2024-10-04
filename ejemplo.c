#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display() {
  char **blackKnight = reverse(knight);
  char **whitesquare = whiteSquare;
  char **square = superImpose(blackKnight, whitesquare);

  char **unidos = join(square, whitesquare);

  interpreter(unidos);

  free(unidos);
  free(blackKnight);
  free(square);
}
