#include <stdio.h>
#include <stdlib.h>
#include "add.h"

#define MAX_LEN (10)
#define OPERANDS (2)

/*!
 * @brief This API does some computation.
 *
 * @param[in] argc : Argument count
 *
 * @param[in] argv : Array of arguments
 *
 * @return Exit code.
 *
 * @retval zero -> Success / +ve value -> Warning / -ve value -> Error
 */

int main(int argc,char *argv[])
{
  add_operand_t array[MAX_LEN][OPERANDS] = {
    [0] = {1,2},
    [1] = {2,4},
    [2] = {10,20},
    [3] = {100,30},
    [4] = {40,53},
    [5] = {37,43},
    [6] = {12,23},
    [7] = {-20,-100},
    [8] = {-30,150},
    [9] = {45,-56}
  };

  for (uint8_t i=0; i < MAX_LEN ;i++)
  {
    printf("%d + %d = %d\n",array[i][0],array[i][1],add(array[i][0],array[i][1]));
  }

  return EXIT_SUCCESS;
}

