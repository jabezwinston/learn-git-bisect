#include <stdio.h>

int add(int a,int  b);

int main()
{
  printf("%d + %d = %d\n",1,2,add(1,2));
  printf("%d + %d = %d\n",2,4,add(2,4));
  return 0;
}
