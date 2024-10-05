#include "chess.h"
#include "figures.h"
#include <stdlib.h>

void display() {
  char **tablero = reverse(repeatH(join(whiteSquare, reverse(whiteSquare)), 4));
  char **torre_caballo = join(rook, knight);
  char **alfin_reyna = join(bishop, queen);
  char **rey_alfil = join(king, bishop);
  char **caballo_torre = join(knight, rook);
  char **fil_1 = join(torre_caballo, alfin_reyna);
  char **fil_2 = join(rey_alfil, caballo_torre);
  char **piezas = reverse(join(fil_1, fil_2));
  interpreter(superImpose(piezas, tablero));
}
