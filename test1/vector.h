#ifndef __VECTOR_H__
#define __VECTOR_H__

typedef struct vector_3d {
   int x;
   int y;
   int z;
} vector_3d;

void print(
   const vector_3d *
);

vector_3d* add(
   const vector_3d *, 
   const vector_3d *
);

vector_3d* subtract(
   const vector_3d *,
   const vector_3d *
);

int dot_product(
   const vector_3d *,
   const vector_3d *
);

vector_3d* cross_product(
   const vector_3d *,
   const vector_3d *
);

#endif
