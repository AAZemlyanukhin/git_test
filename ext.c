#include "ext.h"

void f1()
{
  volatile int i;
  
  for(i=0; i<1000; i++);
}