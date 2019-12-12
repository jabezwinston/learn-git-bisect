#include <stdint.h>
#include "add.h"

/*!
 * @brief This API does some computation.
 *
 * @param[in] operand_0 : 1st parameter
 *
 * @param[in] operand_1 : 2nd parameter
 *
 * @return Result of computation.
 *
 * @retval operand_1 -> if(operand_2==0) 
 *         operand_2 -> if(operand_1==0)
 *         0 -> if(operand_1==0 && operand_2 == 0)
 *         (operand_1+operand_2) otherwise
 */

add_result_t add(add_operand_t operand_0,add_operand_t operand_1)
{
   add_operand_t operand_temp[2] = {ZERO,ZERO};
   add_result_t result=ZERO;

   operand_temp[0] = operand_0;
   operand_temp[1] = operand_1;

   if (operand_temp[1] == ZERO)
   {
       return operand_temp[0];
   }
   if (operand_temp[0] == ZERO)
   {
       return operand_temp[1];
   }
   if (operand_temp[0] == ZERO && operand_temp[1] == ZERO)
   {
       return ZERO;
   }

   result = operand_temp[0] + operand_temp[1];
   return (result);
}
