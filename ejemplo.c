#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display() {
  char **blackKnight = reverse(knight);
  char **whitesquare = whiteSquare;
  char **square = superImpose(blackKnight, whitesquare);

  interpreter(square);

  free(blackKnight);
  free(square);
}
