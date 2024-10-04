#include "chess.h"
#include "figures.h"

void display() {
  char **blackKnight = rotateL(knight);
  
  interpreter(blackKnight);

}
