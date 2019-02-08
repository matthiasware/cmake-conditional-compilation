#ifndef ALGORITHMS_H_
#define ALGORITHMS_H_

#include <iostream>

#ifndef ALGORITHM
  #if defined ALGO_FLAG_1
  #define ALGORITHM algorithm_1
  #elif defined ALGO_FLAG_2
    #define ALGORITHM algorithm_2
  #elif defined ALGO_FLAG_3
    #define ALGORITHM algorithm_3
  #else
    #define ALGORITHM algorithm_default
  #endif
#endif // ALGORITHM

#ifdef ALGO_FLAG_1
void algorithm_1()
{

  std::cout << "ALGO 1\n";
}
#endif // ALGO_FLAG_1

#ifdef ALGO_FLAG_2
void algorithm_2()
{
  std::cout << "ALGO 2\n";
}
#endif // ALGO_FLAG_2

#ifdef ALGO_FLAG_3
void algorithm_3()
{
  std::cout << "ALGO 3\n";
}
#endif // ALGO_FLAG_3


void algorithm_default()
{
  std::cout << "ALGO DEFAULT\n";
}

#endif // ALGORITHMS_H_