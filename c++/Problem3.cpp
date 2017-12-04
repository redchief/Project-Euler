/**
 *    @file    Problem3.cpp
 *    @author  Jaysheel Utekar (redchief)
 *    @date    9 July 2017
 *
 *    @brief   Project Euler - Problem 3 (Largest prime factor)
 *
 *    @section Description
 *    The prime factors of 13195 are 5, 7, 13 and 29.
 *     What is the largest prime factor
 *     of the number 600851475143 ?
 *
 *
 *
 **/
#include <iostream>

int main(){
  auto num = 600851475143;
  auto prime = 2;
  while(prime*prime < num){
    while(num%p == 0){
      num = num/p;
    }
    prime = prime +1;
  }
  std::cout<< num << " is the prime number we want ";
}
