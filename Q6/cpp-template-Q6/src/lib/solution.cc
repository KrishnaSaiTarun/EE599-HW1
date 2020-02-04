#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::FactorialRecursive(int n){

  if(n < 0) return -1;

  int result = 1;
  if(n == 0) return result;

  if(n > 0) {

    result = n * FactorialRecursive(n-1);
  }

  return result;

}
int Solution::FactorialIterative(int n){

  if(n < 0) return -1;

  int result = 1;
  if(n == 0) return result;

  while(n > 0){

    result *= n;
    n -= 1;

  }

  return result;

}


