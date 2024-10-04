#include "chess.h"
#include "figures.h"

void display() {
  char **tablero = repeatH(join(whiteSquare, reverse(whiteSquare)),4);
  
  interpreter(tablero);
}
