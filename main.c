#include <stdio.h>
#include <stdlib.h>
#include "add.h"

int32_t add(int32_t a,int32_t b);

int main(int argc,char *argv[])
{
  int32_t array[10][2] = {
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

  for (uint32_t i=0; i < 10;i++)
    printf("%d + %d = %d\n",array[i][0],array[i][1],add(array[i][0],array[i][1]));

  return EXIT_SUCCESS;
}

