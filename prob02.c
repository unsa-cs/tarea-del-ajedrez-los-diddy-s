#include "chess.h"
#include "figures.h"

void display() {
  char **tablero = reverse(repeatH(join(whiteSquare, reverse(whiteSquare)),4));
    
  interpreter(tablero);
}
