#include <math.h>
#include "program03-point-data-type-interface.h"

float distance(point a, point b) {
  float dx = a.x - b.x, dy = a.y - b.y;
  return sqrt(dx*dx + dy*dy);
}
