#include <stdint.h>
#include "add.h"

/*!
 * @brief This API does some computation.
 *
 * @param[in] operand_1 : 1st parameter
 *
 * @param[in] operand_2 : 2nd parameter
 *
 * @return Result of computation.
 *
 * @retval operand_1 -> if(operand_2==0) 
 *         operand_2 -> if(operand_1==0)
 *         0 -> if(operand_1==0 && operand_2 == 0)
 *         (operand_1+operand_2) otherwise
 */

add_operand_t add(add_operand_t operand_1,add_operand_t operand_2)
{
   add_operand_t operand_1_temp = ZERO,operand_2_temp=ZERO,result=ZERO;
   operand_1_temp = operand_1;
   operand_2_temp = operand_2;

   if (operand_2_temp == ZERO)
   {
       return operand_1_temp;
   }
   if (operand_1_temp == ZERO)
   {
       return operand_2_temp;
   }
   if (operand_1_temp == ZERO && operand_2_temp == ZERO)
   {
       return ZERO;
   }

   result = operand_1_temp + operand_2_temp;
   return (result);
}
