#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void print(const vector_3d *a) {
   printf("x\ty\tz\n%d\t%d\t%d\n", a->x, a->y, a->z);
}

vector_3d* add(const vector_3d *a, const vector_3d *b) {
   vector_3d *c = malloc(sizeof(vector_3d));

   c->x = a->x + b->x;
   c->y = a->y + b->y;
   c->z = a->z + b->z;

   return c;
}

vector_3d* subtract(const vector_3d *a, const vector_3d *b) {
   vector_3d *c = malloc(sizeof(vector_3d));

   c->x = a->x - b->x;
   c->y = a->y - b->y;
   c->z = a->z - b->z;

   return c;
}

int dot_product(const vector_3d *a, const vector_3d *b) {
   return ((a->x * b->x) + (a->y * b->y) + (a->z * b->z));
}

vector_3d* cross_product(const vector_3d *a, const vector_3d *b) {
   vector_3d *c = malloc(sizeof(vector_3d));

   c->x = ((a->y * b->z) - (a->z * b->y));
   c->y = - ((a->x * b->z) - (a->z * b->x));
   c->z = ((a->x * b->y) - (a->y * b->x));

   return c;
}
