#include "chess.h"
#include "figures.h"

void display() {
  char **blackKnight = reverse(knight);
  char **whiteSquare = superImpose(whiteSquare,blackKnight);
  interpreter(blackKnight);

}
