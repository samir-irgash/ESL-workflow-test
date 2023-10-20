#include <stdio.h>
#include "vector.h"
#include "vector.c"

int main () {
   int dp;
   vector_3d   a = {22, -33, 10}, 
               b = {10, -33, 22};

   vector_3d *c = malloc(sizeof(vector_3d));
   // Addition test
   c = add(&a, &b);
   print(c);
   // Subtraction test
   c = subtract(&a, &b);
   print(c);
   // Dot product test
   dp = dot_product(&a, &b);
   printf("%d\n", dp);
   // Cross product test
   c = cross_product(&a, &b);
   print(c);

   return 0;
}
