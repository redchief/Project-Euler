/**
 *    @file    Problem2.cpp
 *    @author  Jaysheel Utekar (redchief)
 *    @date    9 July 2017
 *
 *    @brief   Project Euler - Problem 2 (Even Fibonacci numbers)
 *
 *    @section Description
 *    Each new term in the Fibonacci sequence is generated by
 *    adding the previous two terms.
 *    By starting with 1 and 2, the first 10 terms will be:
 *
 *          1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *    By considering the terms in the Fibonacci sequence whose values
 *    do not exceed four million, find the sum of the even-valued terms.
 *
 *
 **/
#include <iostream>

int main(){
  int first=1,second=2, next=0;
  const auto n = 4000000;
  auto sum = 2;

  for(;next < n;){
    next = first + second;
    first = second;
    second = next;
    //std::cout<< 2%next<< "\n "<<next;
    if (next%2 == 0){
        std::cout << next << "..\n";
        if (next < n){
            sum += next;
          }
    }
  }
  std::cout << "The sum of all even fibonacci is "<< sum << "\n";
  return 0;
}
