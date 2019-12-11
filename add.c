#include <stdint.h>
#include "add.h"

#define ZERO (0)

/*!
 * @brief This API does some computation.
 *
 * @param[in] a : 1st parameter
 *
 * @param[in] b : 2nd parameter
 *
 * @return Result of computation.
 *
 * @retval a -> if(b==0) / b -> if(a==0) / 0 -> if(a==0 && b == 0) / (a+b) otherwise
 */

int8_t add(int8_t a,int8_t b)
{
   int8_t x=ZERO,y=ZERO,z=ZERO;
   x = a;
   y = b;

   if (y == ZERO)
   {
       return x;
   }
   if (x == ZERO)
   {
       return y;
   }
   if (x == ZERO && y == ZERO)
   {
       return 0;
   }

   z = x + y;
   return (z);
}
