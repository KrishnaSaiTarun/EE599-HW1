#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

float Solution::FindMedian(std::vector<float> &input){

  // Find size ----> O(1)
  int n = input.size(); 

  if(n == 0) return -1; // Error Code!!

  // Check if odd or even ----> O(1)
  if(n % 2 == 0) return (input[n/2] + input[n/2 -1])/2;

  else return input[(n-1)/2];


}

