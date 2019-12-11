#include <stdio.h>
#include <stdlib.h>
#include "add.h"

int32_t add(int32_t a,int32_t b);

int main(int argc,char *argv[])
{
  printf("%d + %d = %d\n",1,2,add(1,2));
  printf("%d + %d = %d\n",2,4,add(2,4));
  printf("%d + %d = %d\n",10,20,add(10,20));
  printf("%d + %d = %d\n",100,30,add(100,30));
  printf("%d + %d = %d\n",40,53,add(40,53));
  printf("%d + %d = %d\n",37,43,add(37,43));
  printf("%d + %d = %d\n",12,23,add(12,23));
  return EXIT_SUCCESS;
}
