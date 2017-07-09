/**
*    @file    Problem1.cpp
*    @author  Jaysheel Utekar (redchief)
*    @date    6 July 2017
*
*    @brief   Project Euler - Problem 1 (Multiples of 3 and 5
*
*    @section Description
*    If we list all the natural numbers below 10 that are multiples of 3 or 5,
*    we get 3, 5, 6 and 9. The sum of these multiples is 23.
*    Find the sum of all the multiples of 3 or 5 below 1000.
**/
#include <iostream>

int main(){
  auto sum=0;
  auto n = 1000;

  for(auto i=0; i<n; i++){
    if ((i%3 && i%5) == 0){
      sum += i;
    }
  }
  std::cout << "The answer to the problem is "<<sum;
  return 0;
}
