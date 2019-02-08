#include "algorithms.h"

int main()
{
  #ifdef ALGO_FLAG_1
  	algorithm_1();
  #endif
  #ifdef ALGO_FLAG_2
  	algorithm_2();
  #endif
  #ifdef ALGO_FLAG_3
  	algorithm_3();
  #endif
  algorithm_default();
}