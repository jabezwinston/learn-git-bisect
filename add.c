#include <stdint.h>
#include "add.h"

int8_t add(int8_t a,int8_t b)
{
   int32_t x=0,y=0,z=0;
   x = a;
   y = b;

   if (y == 0)
       return x;
   if (x == 0)
       return y;

   z = x + y;
   return (z);
}
