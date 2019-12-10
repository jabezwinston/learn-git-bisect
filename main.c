#include <stdio.h>
#include "add.h"

int32_t add(int32_t a,int32_t b);

int main()
{
  printf("%d + %d = %d\n",1,2,add(1,2));
  printf("%d + %d = %d\n",2,4,add(2,4));
  return 0;
}
